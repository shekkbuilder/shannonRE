//
// +-------------------------------------------------------------------------+
// |   This file has been generated by The Interactive Disassembler (IDA)    |
// |           Copyright (c) 2015 Hex-Rays, <support@hex-rays.com>           |
// |                      License info: 48-305B-7394-02                      |
// |                    Comsecuris, personal license                         |
// +-------------------------------------------------------------------------+
//
//
//      This file contains the user-defined type definitions.
//      To use it press F2 in IDA and enter the name of this file.
//

#define UNLOADED_FILE   1
#include <idc.idc>

static main(void)
{
  Enums();              // enumerations
  Structures();         // structure types
  ApplyStrucTInfos();
	LowVoids(0x2F00);
	HighVoids(0xE0057000);
}

//------------------------------------------------------------------------
// Information about enum types

static Enums(void) {
        auto id;
        BeginTypeUpdating(UTP_ENUM);
        EndTypeUpdating(UTP_ENUM);
}

static ApplyStrucTInfos_0(void) {
        auto id;
	id = GetStrucIdByName("hdr_str");
	id = GetStrucIdByName("heap4_array_struct");
	id = GetStrucIdByName("allocs_per_pool");
	id = GetStrucIdByName("heap_4_control_struct");
	id = GetStrucIdByName("task_struct");
	id = GetStrucIdByName("task_struct_2");
	id = GetStrucIdByName("rrc_msg_type");
	id = GetStrucIdByName("std_doubly_linked_list_elem");
	id = GetStrucIdByName("msg_handler_struct");
	SetType(GetMemberId(id, 0x0), "void (__cdecl *)()");
	id = GetStrucIdByName("cc_msg_handler_struct");
	id = GetStrucIdByName("rr_msg_hdr");
	id = GetStrucIdByName("L3_out_msg_struct");
	id = GetStrucIdByName("mm_timer_struct");
	id = GetStrucIdByName("nv_item_struct");
	id = GetStrucIdByName("task_queue_something_struct");
	id = GetStrucIdByName("unkn_struct");
	id = GetStrucIdByName("unkn_struct_from_next");
	id = GetStrucIdByName("unkn_test_struct");
	id = GetStrucIdByName("mm_msg_struct");
	SetType(GetMemberId(id, 0x8), "MM_msg_hdr");
	id = GetStrucIdByName("plmn_list_item");
	id = GetStrucIdByName("MM_msg_hdr");
	id = GetStrucIdByName("GMM_msg_hdr");
	SetType(GetMemberId(id, 0x0), "#26 *");
	id = GetStrucIdByName("mm_pdu_log_struct");
	id = GetStrucIdByName("L3_payload_struct");
	id = GetStrucIdByName("protocol_msg_definitions");
	id = GetStrucIdByName("IE_definition_struct");
	id = GetStrucIdByName("IE_definition_hdr_struct");
	id = GetStrucIdByName("struc_38");
	id = GetStrucIdByName("IE_specification_struct");
	id = GetStrucIdByName("IE_representation_struct");
	id = GetStrucIdByName("MM_state_msg_queue_availabilities");
	id = GetStrucIdByName("unknown_state_struct");
	id = GetStrucIdByName("MM_in_msgs_struct");
	SetType(GetMemberId(id, 0x0), "MM_in_msgs_struct_hdr");
	id = GetStrucIdByName("MM_in_msgs_struct_hdr");
	id = GetStrucIdByName("incoming_msg_ptr_struct");
	id = GetStrucIdByName("IE_LV_repr");
	SetType(GetMemberId(id, 0x4), "void *");
	id = GetStrucIdByName("MPU_region_config");
	return id;
}

//------------------------------------------------------------------------
// Information about type information for structure members

static ApplyStrucTInfos() {
	ApplyStrucTInfos_0();
}

static Structures_0(id) {
        auto mid;

	id = AddStrucEx(-1,"hdr_str",0);
	id = AddStrucEx(-1,"heap4_array_struct",0);
	SetStrucComment(id,"\n\n================================\n\nStart of Heap related structs\n\n================================\n\n\n// each heap \"pool\" (array) has a control struct.\n// its used to maintain lookups for free slots in the array",1);
	id = AddStrucEx(-1,"allocs_per_pool",0);
	SetStrucComment(id,"\n // this struct hold stats about allocations per pool",1);
	id = AddStrucEx(-1,"heap_4_control_struct",0);
	SetStrucComment(id,"\n// this is the main structure for heap 4.\n// in memory, \n// it is followed directly by the bitmaps\n// then that is followed directly by the array structs\n\n// note - all this is allocated out of heap 1.\n// there is another piece, that is really in global memory\n// that contains the HEADs of the lookaside lists per pool size\n// and some stat counters for the heap. this is at heap_4_start_ptr.",1);
	id = AddStrucEx(-1,"task_struct",0);
	SetStrucComment(id,"================================\n\nStart of Task related structs\n\n================================\n",1);
	id = AddStrucEx(-1,"task_struct_2",0);
	SetStrucComment(id,"\n\n// This is a duplicate struct, it's actually the same\n// But for not common tasks (main, HSIR{0,1,2}).\n// These end with two DEADBEEFs",1);
	id = AddStrucEx(-1,"rrc_msg_type",0);
	SetStrucComment(id,"\n\n================================\n\nStart of RR, MM message handling\nrelated structs\n\n================================\n",1);
	id = AddStrucEx(-1,"std_doubly_linked_list_elem",0);
	id = AddStrucEx(-1,"msg_handler_struct",0);
	SetStrucComment(id,"\n\n=====================\n\nStructures for message\nhandlers. Universal in L3.\n\n=====================\n\n",1);
	id = AddStrucEx(-1,"cc_msg_handler_struct",0);
	SetStrucComment(id,"\nThis struct is for each message specific handler function in CC\n\n",1);
	id = AddStrucEx(-1,"rr_msg_hdr",0);
	id = AddStrucEx(-1,"L3_out_msg_struct",0);
	id = AddStrucEx(-1,"mm_timer_struct",0);
	id = AddStrucEx(-1,"nv_item_struct",0);
	id = AddStrucEx(-1,"task_queue_something_struct",0);
	SetStrucComment(id,"\n\n=====================\n\nStructures possibly related\nto getting timer expiry messages\n\n=====================",1);
	id = AddStrucEx(-1,"unkn_struct",0);
	id = AddStrucEx(-1,"unkn_struct_from_next",0);
	SetStrucComment(id,"same as above, without the first field.\n\nthis is defined as a helper, because there is a function,\n that handles a ptr to the struct from its second field\n\nprobably the truth is that there is a struct that has one field and\na second field that's a struct also",1);
	id = AddStrucEx(-1,"unkn_test_struct",0);
	SetStrucComment(id,"\n\nThis struct has got something to do with testing.\nunkn_struct_array -> filling from it, gets called from the Default_task_entry() and from debugging functions; there is some kind of test menu in here and this is related to initializing it.\n\n",1);
	id = AddStrucEx(-1,"mm_msg_struct",0);
	SetStrucComment(id,"\n\n========================\n\nStart of MM/GMM PDU related structures\n\n========================\n\n\n\n\n\n\nthis is the struct of the message\nreceived by MM_process_message\n\nits fields are added in as more are found out",1);
	id = AddStrucEx(-1,"plmn_list_item",0);
	id = AddStrucEx(-1,"MM_msg_hdr",0);
	id = AddStrucEx(-1,"GMM_msg_hdr",0);
	id = AddStrucEx(-1,"mm_pdu_log_struct",0);
	id = AddStrucEx(-1,"L3_payload_struct",0);
	SetStrucComment(id,"These structures are not part of the messages -\nrather, they are at a fixed place in memory, per protocol,\nused to maintain parsed out info from incoming (also for outgoing)\nmessages.",1);
	id = AddStrucEx(-1,"protocol_msg_definitions",0);
	SetStrucComment(id,"\n\n=====================\n\nStructures for representing IEs\n\n=====================\n\n",1);
	id = AddStrucEx(-1,"IE_definition_struct",0);
	SetStrucComment(id,"this structure reprsesents definition of IEs that we expect.\n\nfor each IE, it will have:\n - its ID,\n - is it mandatory or not,\n - ...\n\n\nEach incoming message will point out an array of such definition\nstructs, representative of what IEs a given message type is composed of.\n\nNOTE: this is the definition of the IE as it RELATES TO a msg.",1);
	id = AddStrucEx(-1,"IE_definition_hdr_struct",0);
	id = AddStrucEx(-1,"struc_38",0);
	id = AddStrucEx(-1,"IE_specification_struct",0);
	id = AddStrucEx(-1,"IE_representation_struct",0);
	SetStrucComment(id,"this is the struct that saves a parsed out IE.\nIE Value contents aren't copied anywhere, it will just have a reference\npointing inside the incoming raw pdu to the right starting offset",1);
	id = AddStrucEx(-1,"MM_state_msg_queue_availabilities",0);
	SetStrucComment(id,"\n\n=====================\n\nStructures for queues/ringbuffers/etc\nthat incoming messages are grabbed from\n\n=====================\n\n",1);
	id = AddStrucEx(-1,"unknown_state_struct",0);
	id = AddStrucEx(-1,"MM_in_msgs_struct",0);
	id = AddStrucEx(-1,"MM_in_msgs_struct_hdr",0);
	id = AddStrucEx(-1,"incoming_msg_ptr_struct",0);
	id = AddStrucEx(-1,"IE_LV_repr",0);
	id = AddStrucEx(-1,"MPU_region_config",0);
	
	id = GetStrucIdByName("hdr_str");
	mid = AddStrucMember(id,"lte",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"ver",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"date_ptr",	0X8,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"date",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"size",	0X10,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"load_addr",	0X14,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"unk1",	0X18,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"unk2",	0X1C,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("heap4_array_struct");
	mid = AddStrucMember(id,"lookaside_list_next",	0,	0x20000400,	-1,	4);
	SetMemberComment(id,	0,	"Null for large sizes, those don't go on lookaside lists",	1);
	mid = AddStrucMember(id,"lookaside_list_prev",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"id",	0X8,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X8,	"0xC000... for small sizes, 0x8000... for large sizes",	1);
	mid = AddStrucMember(id,"first_slot",	0XC,	0x20000400,	-1,	4);
	SetMemberComment(id,	0XC,	"where the array's array itself starts",	1);
	mid = AddStrucMember(id,"busy_slots",	0X10,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X10,	"note: one slot is 64 bytes occupied. so\n - in list 0, num_busy_slots = num_allocs, i.e. 32 allocs of 64 bytes = 2048\n - in list 1, num_busy_slots = num_allocs*2, i.e. 16 allocs of 128 bytes = 2048\n - in list 2, num_busy_slots = num_allocs*4, i.e. 8 allocs of 256 bytes = 2048\n - in list 3, num_busy_slots = num_allocs*8, i.e. 4 allocs of 512 bytes = 2048\n - in list 4, num_busy_slots = num_allocs*16, i.e. 2 allocs of 1024 bytes = 2048\n\nnote, num_busy_slots was a misnomer, it is a bitmap of the slots taken.",	1);
	
	id = GetStrucIdByName("allocs_per_pool");
	mid = AddStrucMember(id,"curr_allocs_per_pool",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"max_allocs_per_pool",	0X4,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("heap_4_control_struct");
	mid = AddStrucMember(id,"array_start",	0,	0x20000400,	-1,	4);
	SetMemberComment(id,	0,	"where the actual \"pools\" (arrays) start",	1);
	mid = AddStrucMember(id,"array_end",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"array_structs_start",	0X8,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"unk1",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"bitmaps_start",	0X10,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"unk2",	0X14,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"unk3",	0X18,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"unk4",	0X1C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"num_arrays",	0X20,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"num_bitmaps",	0X24,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("task_struct");
	mid = AddStrucMember(id,"next_task",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"prev_task",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"task_magic",	0X8,	0x300400,	-1,	4);
	SetMemberComment(id,	0X8,	"\"KSAT\"",	1);
	mid = AddStrucMember(id,"field_C",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_10",	0X10,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_14",	0X14,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_18",	0X18,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_1C",	0X1C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_20",	0X20,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"task_start_fn_ptr",	0X24,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"stack_top",	0X28,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"stack_base",	0X2C,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X2C,	"two dwords before stack base must be DEADBEEF DEADBEEF, check happens during some IRQ serving ops",	1);
	mid = AddStrucMember(id,"stack_ptr",	0X30,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X30,	"not top of the stack, but curr SP when SP is restored from during IRQs (context switches).",	1);
	mid = AddStrucMember(id,"field_34",	0X34,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_38",	0X38,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"fun_ptr",	0X3C,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X3C,	"this is some kind of IRQ return handler routine",	1);
	mid = AddStrucMember(id,"field_40",	0X40,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_44",	0X44,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_48",	0X48,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_4C",	0X4C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_50",	0X50,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_54",	0X54,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_58",	0X58,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"task_name",	0X5C,	0x300400,	-1,	8);
	mid = AddStrucMember(id,"field_64",	0X64,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"common_task",	0X68,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_6C",	0X6C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_70",	0X70,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_74",	0X74,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"common_task2",	0X78,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X78,	"looks like a copy of the common_task fn ptr for common tasks",	1);
	mid = AddStrucMember(id,"field_7C",	0X7C,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("task_struct_2");
	mid = AddStrucMember(id,"next_task",	0,	0x20000400,	-1,	4);
	SetMemberComment(id,	0,	"task structs are a doubly linked list,\nwrapping around with the task_struct_head ptr as the head",	1);
	mid = AddStrucMember(id,"prev_task",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"task_magic",	0X8,	0x300400,	-1,	4);
	SetMemberComment(id,	0X8,	"\"KSAT\"",	1);
	mid = AddStrucMember(id,"field_C",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_10",	0X10,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_14",	0X14,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_18",	0X18,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_1C",	0X1C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_20",	0X20,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"task_start_fn_ptr",	0X24,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"stack_top",	0X28,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"stack_base",	0X2C,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X2C,	"two dwords before stack base must be DEADBEEF DEADBEEF\n\nif the stack spills into this, then when checked,\nstack of is detected if DEADBEEF is overwritten\n(check happens during some IRQ serving ops)",	1);
	mid = AddStrucMember(id,"stack_ptr",	0X30,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X30,	"not top of the stack, but curr SP\nIMPORTANT: it's not that the SP is\nalways tracked here in real-time.\n\nrather, this is where SP is restored\nfrom during IRQs (context switches).\n\nso this value here is something like\n\"SP at some previous time\".",	1);
	mid = AddStrucMember(id,"field_34",	0X34,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_38",	0X38,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"fun_ptr",	0X3C,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X3C,	"this is some kind of IRQ return handler routine",	1);
	mid = AddStrucMember(id,"field_40",	0X40,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_44",	0X44,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_48",	0X48,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_4C",	0X4C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_50",	0X50,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_54",	0X54,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_58",	0X58,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"task_name",	0X5C,	0x300400,	-1,	8);
	mid = AddStrucMember(id,"field_64",	0X64,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"common_task",	0X68,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X68,	"always empty",	1);
	mid = AddStrucMember(id,"field_6C",	0X6C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_70",	0X70,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_74",	0X74,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"deadbeef",	0X78,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"deadbeef2",	0X7C,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("rrc_msg_type");
	mid = AddStrucMember(id,"msg_id",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"msg_name",	0X4,	0x300400,	-1,	48);
	
	id = GetStrucIdByName("std_doubly_linked_list_elem");
	mid = AddStrucMember(id,"next",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"prev",	0X4,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("msg_handler_struct");
	mid = AddStrucMember(id,"handler_fnptr",	0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"flag",	0X4,	0x10000400,	-1,	2);
	SetMemberComment(id,	0X4,	".... ...X means whether the message has an IEs to parse (whether it has payload)\n.... ..X. means if the size includes the 2 mandatory first bytes of an MM msg.\n.... X... means if pdu starts with word of pdu_size or not. if yes, than those bytes are skipped to go to the beginning of pdu payload",	1);
	mid = AddStrucMember(id,"padding_before_payload",	0X6,	0x10000400,	-1,	2);
	SetMemberComment(id,	0X6,	"this field is used to skip ahead in the pdu struct to where the actual message starts.\n\n\nfor the types where SI_PD_MT is read out, this must be +16 to go to those V bytes, while for other types, this will vary, we don't yet see what else is in here,\nwhy there would be padding, but it's not important so far.",	1);
	mid = AddStrucMember(id,"msg_index",	0X8,	0x000400,	-1,	1);
	SetMemberComment(id,	0X8,	"the low byte of this is the msg_index, high byte is the prot_index",	1);
	mid = AddStrucMember(id,"prot_index",	0X9,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"unkn",	0XA,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"log_message_ptr",	0XC,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("cc_msg_handler_struct");
	mid = AddStrucMember(id,"handler_fnptr",	0,	0x20500400,	0,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"flag",	0X4,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"padding",	0X6,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"msg_id_something",	0X8,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"unkn",	0XA,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"log_message_ptr",	0XC,	0x20500400,	0,	4,	0XFFFFFFFF,	0,	0x000002);
	
	id = GetStrucIdByName("rr_msg_hdr");
	mid = AddStrucMember(id,"field_0",	0,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"size",	0X2,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"field_4",	0X4,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"field_6",	0X6,	0x10000400,	-1,	2);
	
	id = GetStrucIdByName("L3_out_msg_struct");
	mid = AddStrucMember(id,"unk1",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"unk2",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"log_message_ptr",	0X8,	0x20500400,	0,	4,	0XFFFFFFFF,	0,	0x000002);
	
	id = GetStrucIdByName("mm_timer_struct");
	mid = AddStrucMember(id,"field_0",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_4",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_8",	0X8,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"id",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_10",	0X10,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_14",	0X14,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_18",	0X18,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_1C",	0X1C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_20",	0X20,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_24",	0X24,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_28",	0X28,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_2C",	0X2C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_30",	0X30,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_34",	0X34,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_38",	0X38,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_3C",	0X3C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_40",	0X40,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_44",	0X44,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("nv_item_struct");
	mid = AddStrucMember(id,"name",	0,	0x20500400,	0,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"size",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"value",	0X8,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X8,	" IMPORTANT!!! I'm not sure this is really the value per-se. The get_an_nv_item function is kind of complicated, i'm not certain if this value is the value or some mapping of it.",	1);
	mid = AddStrucMember(id,"unk",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"type",	0X10,	0x20500400,	0,	4,	0XFFFFFFFF,	0,	0x000002);
	
	id = GetStrucIdByName("task_queue_something_struct");
	mid = AddStrucMember(id,"name_something",	0,	0x20500400,	0,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"unk1",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"flag_something",	0X8,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X8,	" this is some kind of id.\n\nIf it is 4, it is skipped\n    - in this case the, next element gives the id of the next queue struct.\n\nIf it is not 4, it must be 1 or 5.",	1);
	mid = AddStrucMember(id,"next_queue_index",	0XC,	0x20200400,	-1,	4);
	mid = AddStrucMember(id,"unk_struct_index",	0X10,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X10,	"this is an index into the doubly-linked list head_unk_struct.\ndon't know wwhat that  struct holds",	1);
	
	id = GetStrucIdByName("unkn_struct");
	mid = AddStrucMember(id,"unk",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"next",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"prev",	0X8,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_C",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_10",	0X10,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"num_processed_msgs",	0X14,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"field_16",	0X16,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"messages",	0X18,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X18,	"array of 2 dword struct, each dword is a pointer to a message and a number.\nfor MM, number must be 2 or 3. it's a type",	1);
	mid = AddStrucMember(id,"num_msgs",	0X1C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_20",	0X20,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"name",	0X24,	0x300400,	-1,	8);
	mid = AddStrucMember(id,"field_2C",	0X2C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_30",	0X30,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("unkn_struct_from_next");
	mid = AddStrucMember(id,"next",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"prev",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_8",	0X8,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_C",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"num_of_double_dwords_processsed",	0X10,	0x10000400,	-1,	2);
	SetMemberComment(id,	0X10,	"it looks like, the first len is a counter,\nthe next len is the total.\n\nthis buffer seems to be a holder of structs with two dwords in them.\n\nfirst dword is a length, second dword is a pointer.\n\nlike if it would be messages ????\n\nwhen the counter reaches up to max, it goes back down to 0.",	1);
	mid = AddStrucMember(id,"field_14",	0X12,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"ptr_to_double_dwords",	0X14,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"num_double_dwords",	0X18,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_1C",	0X1C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"name",	0X20,	0x000400,	-1,	8);
	mid = AddStrucMember(id,"field_28",	0X28,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("unkn_test_struct");
	mid = AddStrucMember(id,"field_0",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_4",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"name",	0X8,	0x20500400,	0,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"field_C",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_10",	0X10,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_14",	0X14,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_18",	0X18,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("MM_msg_hdr");
	mid = AddStrucMember(id,"payload_size",	0,	0x10000400,	-1,	2);
	SetMemberComment(id,	0,	"the size of the actual MM payload, including the TI_SI_PD/MessageType bytes.",	1);
	mid = AddStrucMember(id,"field_2",	0X2,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"field_4",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_8",	0X8,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"field_C",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"TI_SI_PD",	0X10,	0x000400,	-1,	1);
	SetMemberComment(id,	0X10,	"for MM handler type 0xD, the type is substituted in from the paging struct\n, like this:\n\n- type: lowest four bits\n- handler: second lowest byte\n\nSo this is the TI/PD + message type! (24.008)",	1);
	mid = AddStrucMember(id,"MessageType",	0X11,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"start_of_mm_pdu",	0X12,	0x000400,	-1,	1);
	
	id = GetStrucIdByName("mm_msg_struct");
	mid = AddStrucMember(id,"next",	0,	0x20000400,	-1,	4);
	SetMemberComment(id,	0,	"seems like these messages are linked on a singly linked list.",	1);
	mid = AddStrucMember(id,"total_msg_size",	0X4,	0x10000400,	-1,	2);
	SetMemberComment(id,	0X4,	"the complete size, incl. this header",	1);
	mid = AddStrucMember(id,"type",	0X6,	0x10000400,	-1,	2);
	SetMemberComment(id,	0X6,	"type high distinguishes MM/GMM, type low selects the decoder handler",	1);
	mid = AddStrucMember(id,"mm_msg_hdr",	0X8,	0x60000400,	GetStrucIdByName("MM_msg_hdr"),	19);
	SetMemberComment(id,	0X8,	"the MM pdu is INSIDE the message right here, not pointing TO it.\n\nthe is actually a union, as it could be mm_pdu or gmm_pdu.\n\nas we see below, the two are different!\n\nthe MM_msg_hdr starts with its size, but the GMM_msg_hdr starts with a pointer\nto where it actually starts - i believe that that's just a lookahead offset.",	1);
	
	id = GetStrucIdByName("plmn_list_item");
	mid = AddStrucMember(id,"mcc",	0,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"mnc_1",	0X1,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"mnc_2",	0X2,	0x000400,	-1,	1);
	
	id = GetStrucIdByName("GMM_msg_hdr");
	mid = AddStrucMember(id,"msg_hdr_lookahead_ptr",	0,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	SetMemberComment(id,	0,	"this is simply a +4 lookahead",	1);
	mid = AddStrucMember(id,"size",	0X4,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"field_6",	0X6,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"TI_SI_PD",	0X8,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"MessageType",	0X9,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"start_of_gmm_pdu",	0XA,	0x000400,	-1,	1);
	
	id = GetStrucIdByName("mm_pdu_log_struct");
	mid = AddStrucMember(id,"msg_name",	0,	0x20500400,	0,	4,	0XFFFFFFFF,	0,	0x000002);
	mid = AddStrucMember(id,"arrival_count",	0X4,	0x10000400,	-1,	2);
	SetMemberComment(id,	0X4,	"log what Nth message this was. e.g. if this was the 10th received message, log 10.",	1);
	mid = AddStrucMember(id,"id",	0X6,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"id2",	0X8,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("L3_payload_struct");
	mid = AddStrucMember(id,"mm_pdu",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"pdu_size",	0X4,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"prot_index",	0X6,	0x000400,	-1,	1);
	SetMemberComment(id,	0X6,	"selects which collection of IEs_in_msg definitions to select one IEs_in_msg definition from.",	1);
	mid = AddStrucMember(id,"msg_type",	0X7,	0x000400,	-1,	1);
	SetMemberComment(id,	0X7,	"identifies the msg within the array of msgs which this is about.\n\nthe MessageType field of IEs is saved in here, in effect acts as an index too.",	1);
	mid = AddStrucMember(id,"IE_representation_array_ptr",	0X8,	0x20500400,	0,	4,	0XFFFFFFFF,	0,	0x000002);
	SetMemberComment(id,	0X8,	"this is an array where the parsed out IEs will get stored into",	1);
	mid = AddStrucMember(id,"smallest_IE_index",	0XC,	0x10000400,	-1,	2);
	SetMemberComment(id,	0XC,	"this is the \"id\" of the first IE in this IE_representation array",	1);
	mid = AddStrucMember(id,"highest_IE_index",	0XE,	0x10000400,	-1,	2);
	SetMemberComment(id,	0XE,	"this is the \"id\" of the last IE in this IE_representation array",	1);
	
	id = GetStrucIdByName("protocol_msg_definitions");
	mid = AddStrucMember(id,"msg_IE_definitions_ptr",	0,	0x20500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	SetMemberComment(id,	0,	"this is a ptr to an array of ptrs to per-msg IE enumerations.\nthat array is per-msg, so each element in it is a ptr representing\na msg, specifically the enumeration of IEs expected for that given msg.\n\nin other words: \n\n * protocol_msg_definitions_array[x] -> ptr is a ptr to an array of ptrs,\narray size is protocol_msg_definitions_array[x] -> num_msgs\n * protocol_msg_definitions_array[x] -> ptr[y] is a ptr to an array of\n IE_definition_structs, that array representing the IEs expected in the given message type.",	1);
	mid = AddStrucMember(id,"num_msgs",	0X4,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"pad",	0X5,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"pad2",	0X6,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"pad3",	0X7,	0x000400,	-1,	1);
	
	id = GetStrucIdByName("IE_definition_struct");
	mid = AddStrucMember(id,"IE_spec_index",	0,	0x10000400,	-1,	2);
	mid = AddStrucMember(id,"flags",	0X2,	0x000400,	-1,	1);
	SetMemberComment(id,	0X2,	".... ...X - mandatory",	1);
	mid = AddStrucMember(id,"field_3",	0X3,	0x000400,	-1,	1);
	
	id = GetStrucIdByName("IE_definition_hdr_struct");
	mid = AddStrucMember(id,"prot",	0,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"msg",	0X1,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"flags",	0X2,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"num_IEs",	0X3,	0x000400,	-1,	1);
	
	id = GetStrucIdByName("struc_38");
	mid = AddStrucMember(id,"IE_IEI",	0,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"IE_type",	0X1,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"IE_min_size",	0X2,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"field_3",	0X3,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"IE_size",	0X4,	0x000400,	-1,	1);
	SetMemberComment(id,	0X4,	"for fixed-size IEs (like TV)",	1);
	mid = AddStrucMember(id,"field_5",	0X5,	0x000400,	-1,	1);
	
	id = GetStrucIdByName("IE_specification_struct");
	mid = AddStrucMember(id,"IE_IEI",	0,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"IE_type",	0X1,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"IE_min_size",	0X2,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"field_3",	0X3,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"IE_size",	0X4,	0x000400,	-1,	1);
	SetMemberComment(id,	0X4,	"for fixed-size IEs (like TV)",	1);
	mid = AddStrucMember(id,"field_5",	0X5,	0x000400,	-1,	1);
	
	id = GetStrucIdByName("IE_representation_struct");
	mid = AddStrucMember(id,"V_ptr",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"LI",	0X4,	0x10000400,	-1,	2);
	SetMemberComment(id,	0X4,	"length indicator, i.e. the length",	1);
	mid = AddStrucMember(id,"is_present",	0X6,	0x000400,	-1,	1);
	SetMemberComment(id,	0X6,	"if 0 - not present, if 0x20 - present, if 0x20|0x40 - present but erroneous",	1);
	mid = AddStrucMember(id,"IEI",	0X7,	0x000400,	-1,	1);
	SetMemberComment(id,	0X7,	"the Type of the IE. For 'T' type IEs, this is all there is in it,\nso in these cases, the V_ptr is made to point to this field actually,\ninstead of into the raw pdu. for other types, it points into the raw pdu.",	1);
	
	id = GetStrucIdByName("MM_state_msg_queue_availabilities");
	mid = AddStrucMember(id,"field_0",	0,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"field_1",	0X1,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"field_2",	0X2,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"field_3",	0X3,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"field_4",	0X4,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"field_5",	0X5,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"field_6",	0X6,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"field_7",	0X7,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"field_8",	0X8,	0x000400,	-1,	1);
	mid = AddStrucMember(id,"field_9",	0X9,	0x000400,	-1,	1);
	
	id = GetStrucIdByName("unknown_state_struct");
	mid = AddStrucMember(id,"field_0",	0,	0x000400,	-1,	1268);
	
	id = GetStrucIdByName("MM_in_msgs_struct_hdr");
	mid = AddStrucMember(id,"num_ptrs",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"ptr_to_use_index",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"num_available",	0X8,	0x20000400,	-1,	4);
	SetMemberComment(id,	0X8,	"this is a counter of availability; of messages it seems",	1);
	mid = AddStrucMember(id,"field_C",	0XC,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("MM_in_msgs_struct");
	mid = AddStrucMember(id,"hdr",	0,	0x60000400,	GetStrucIdByName("MM_in_msgs_struct_hdr"),	16);
	mid = AddStrucMember(id,"ptr_array",	0X10,	0x20000400,	-1,	80);
	
	id = GetStrucIdByName("incoming_msg_ptr_struct");
	mid = AddStrucMember(id,"msg_ptr",	0,	0x20000400,	-1,	4);
	SetMemberComment(id,	0,	"what is stored in here, is a ptr to where a msg_ptr is stored.\n\ni.e., if this type of message becomes available, from *msg_ptr we can read out the actual ptr.",	1);
	mid = AddStrucMember(id,"flag",	0X4,	0x20000400,	-1,	4);
	
	id = GetStrucIdByName("IE_LV_repr");
	mid = AddStrucMember(id,"len",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"v_ptr",	0X4,	0x25500400,	0XFFFFFFFF,	4,	0XFFFFFFFF,	0,	0x000002);
	
	id = GetStrucIdByName("MPU_region_config");
	mid = AddStrucMember(id,"region_number",	0,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"region_base_address",	0X4,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"region_size",	0X8,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"region_TEX",	0XC,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"region_AP",	0X10,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"region_XN",	0X14,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"region_S",	0X18,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"region_C",	0X1C,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"region_B",	0X20,	0x20000400,	-1,	4);
	mid = AddStrucMember(id,"region_enable",	0X24,	0x20000400,	-1,	4);
	return id;
}

//------------------------------------------------------------------------
// Information about structure types

static Structures(void) {
        auto id;
        BeginTypeUpdating(UTP_STRUCT);
	id = Structures_0(id);
        EndTypeUpdating(UTP_STRUCT);
}

// End of file.