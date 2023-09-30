//
// Created by PinkySmile on 04/11/2020.
//

#ifndef SOKULIB_SOKUADDRESSES_HPP
#define SOKULIB_SOKUADDRESSES_HPP


namespace SokuLib
{
	#define TEXT_SECTION_OFFSET  0x00401000
	#define TEXT_SECTION_SIZE    0x00456000
	#define RDATA_SECTION_OFFSET 0x00857000
	#define RDATA_SECTION_SIZE   0x0002B000
	#define DATA_SECTION_OFFSET  0x00882000
	#define DATA_SECTION_SIZE    0x00021000

	enum Address {
		ADDR_RENDERER_BEGIN                         = 0x00401000,
		ADDR_RENDERER_END                           = 0x00401040,
		ADDR_LOAD_SOUND                             = 0x00401af0,
		ADDR_REMOVE_SOUND                           = 0x00401bd0,
		ADDR_PLAY_SOUND                             = 0x00401d50,
		ADDR_STRING_ASSIGN_STRING                   = 0x004020d0,
		ADDR_STRING_ASSIGN_CSTR                     = 0x00402200,
		ADDR_STRING_ERASE                           = 0x004022d0,
		ADDR_STRING_RESIZE                          = 0x004024e0,
		ADDR_ALLOCATE_FUNCTION                      = 0x004026A0,
		ADDR_DEALLOCATE_FUNCTION                    = 0x00402810,
		ADDR_TEXTURE_MANAGER_LOAD_TEXTURE           = 0x00405030,
		ADDR_TEXTURE_MANAGER_CREATE_TEXT            = 0x004050A0,
		ADDR_TEXTURE_MANAGER_REMOVE                 = 0x00405110,
		ADDR_TEXTURE_MANAGER_SET_TEXTURE            = 0x00405190,
		ADDR_TEXTURE_MANAGER_GET_SIZE               = 0x00405200,
		ADDR_CSPRITE_INIT                           = 0x00406560,
		ADDR_LOAD_GRAPHICS_FUN                      = 0x00408410,
		ADDR_STRING_APPEND                          = 0x00408620,
		ADDR_CTILE_INIT1                            = 0x00409CB0,
		ADDR_CTILE_INIT2                            = 0x00409CE0,
		ADDR_CTILE_RENDER                           = 0x00409DF0,
		ADDR_LOAD_DAT                               = 0x0040D1D0,
		ADDR_READER_CREATE                          = 0x0040D1E0,
		ADDR_PACKAGE_OPENFILE                       = 0x0041C080,
		ADDR_BITMAP_COPYTOBUFFER                    = 0x0041AF70,
		ADDR_SWR_FONT_CREATE                        = 0x004116D0,
		ADDR_SWR_FONT_DESTRUCT                      = 0x00411760,
		ADDR_SWR_FONT_SET_INDIRECT                  = 0x00411840,
		ADDR_CNUMBER_RENDER                         = 0x00414940,
		ADDR_GET_PACKAGED_BGM_CALLER                = 0x00418BE1,
		ADDR_GET_PACKAGED_SFL_CALLER                = 0x00418F41,
		ADDR_GAUGE_SETUP_FROM_TEXTURE               = 0x0041B390,
		ADDR_SELECT_SV_SIZE                         = 0x0041E622,
		ADDR_SELECT_SV_CREATER                      = 0x0041E644,
		ADDR_SELECT_CL_SIZE                         = 0x0041E6CD,
		ADDR_SELECT_CL_CREATER                      = 0x0041E6EF,
		ADDR_MENUCURSOR_UPDATE                      = 0x0041FBF0,
		ADDR_STACK_PEEK_VALUE                       = 0x0042AAC0,
		ADDR_INPUT_MANAGER_READ_REPLAY              = 0x0042EAC0,
		ADDR_GET_CARD                               = 0x00435B60,
		ADDR_LOOKUP_CARD                            = 0x00436620,
		ADDR_BATTLE_MANAGER_SIZE                    = 0x004396A2,
		ADDR_BATTLE_MANAGER_CREATER                 = 0x004396C0,
		ADDR_CTILE_COPY                             = 0x0043C830,
		ADDR_CFILELIST_GOTO_PARENT                  = 0x0043CA40,
		ADDR_CFILELIST_RENDER_LINE                  = 0x0043CBF0,
		ADDR_CHECK_KEY_ONESHOT                      = 0x0043DE30,
		ADDR_ACTIVATE_MENU                          = 0x0043E130,
		ADDR_PLAY_SE_WAVE_BUFFER                    = 0x0043E1E0,
		ADDR_SET_BATTLE_MODE                        = 0x0043E9A0,
		ADDR_MENUCURSOR_RENDER                      = 0x00443A50,
		ADDR_HOST_FCT                               = 0x00446A40,
		ADDR_JOIN_FCT                               = 0x00446B20,
		ADDR_PLAY_NET_BELL                          = 0x00446D9A,
		ADDR_NETWORK_MENU_INIT                      = 0x00448760,
		ADDR_PLAY_SE_CHARACTER                      = 0x00464980,
		ADDR_PUSH_CARD                              = 0x004698A0,
		ADDR_PROFILENAME_PRINT_CODE1                = 0x0047D857,
		ADDR_PROFILENAME_PRINT_CODE1_END            = 0x0047D9EE,
		ADDR_PROFILENAME_PRINT_CODE2                = 0x0047D9FE,
		ADDR_PROFILENAME_PRINT_CODE2_END            = 0x0047DB95,

		ADDR_DELETE_FUNCTION                        = 0x0081F6FA,
		ADDR_NEW_FUNCTION                           = 0x0081FBDC,
		ADDR_GDI32_DLL                              = 0x00850000,
		ADDR_IMM32_DLL                              = 0x0085701C,
		ADDR_KERNEL32_DLL                           = 0x00857030,
		ADDR_USER32_DLL                             = 0x008571D8,
		ADDR_WINMM32_DLL                            = 0x00857258,
		ADDR_WS2_32_DLL                             = 0x00857264,
		ADDR_D3D9_DLL                               = 0x00857264,
		ADDR_D3DX9_33_DLL                           = 0x00857264,
		ADDR_IMAGEHLP_DLL                           = 0x00857264,
		ADDR_OLE32_DLL                              = 0x00857264,
		ADDR_VTBL_BATTLE                            = 0x008574A0,
		ADDR_VTBL_SELECT_SV                         = 0x008574DC,
		ADDR_VTBL_LOADINGSV                         = 0x008574FC,
		ADDR_VTBL_BATTLE_SV                         = 0x00857518,
		ADDR_VTBL_SELECT_CL                         = 0x00857534,
		ADDR_VTBL_LOADINGCL                         = 0x00857554,
		ADDR_VTBL_BATTLE_CL                         = 0x00857570,
		ADDR_VTBL_BATTLE_WATCH                      = 0x0085758C,
		ADDR_VTBL_LOADING                           = 0x0085766C,
		ADDR_VTBL_CSPRITE                           = 0x008576AC,
		ADDR_VTBL_CSPRITE_EX                        = 0x0085772C,
		ADDR_VTBL_LOGO                              = 0x00857740,
		ADDR_VTBL_CTILE                             = 0x0085775C,
		ADDR_VTBL_CDESIGN                           = 0x00857A30,
		ADDR_VTBL_FXMANAGER_SELECT                  = 0x00857A64,
		ADDR_VTBL_FX_SELECT                         = 0x00857AD4,
		ADDR_VTBL_SELECT                            = 0x00857D2C,
		ADDR_VTBL_TITLE                             = 0x00857FAC,
		ADDR_VTBL_LOADING_WATCH                     = 0x00858180,
		ADDR_VTBL_FILEREADER                        = 0x0085823C,
		ADDR_VTBL_CREPLAYLIST                       = 0x00858344,
		ADDR_DEFAULT_FONT_NAME                      = 0x00858764,
		ADDR_VTBL_CPROFILELIST                      = 0x00858794,
		ADDR_VTBL_BATTLE_MANAGER                    = 0x008588EC,
		ADDR_VTBL_FXMANAGER_WEATHER                 = 0x00858A10,
		ADDR_VTBL_FX_WEATHER                        = 0x00858A3C,
		ADDR_VTBL_FXMANAGER_EFFECT                  = 0x00858A88,
		ADDR_VTBL_FX_EFFECT                         = 0x00858AB4,
		ADDR_VTBL_CFILELIST                         = 0x00858B44,
		ADDR_VTBL_CNUMBER                           = 0x00858C2C,
		ADDR_VTBL_PAUSE_MENU                        = 0x00859154,
		ADDR_VTBL_CONFIG_MENU                       = 0x0085918C,
		ADDR_VTBL_VS_NETWORK_MENU                   = 0x00859300,
		ADDR_VTBL_MUSICLIST                         = 0x0085955C,
		ADDR_VTBL_MUSIC_ROOM_MENU                   = 0x00859574,
		ADDR_VTBL_REPLAY_MENU                       = 0x008596F4,
		ADDR_VTBL_RESULTLIST                        = 0x00859778,
		ADDR_VTBL_RESULT_MENU                       = 0x00859790,
		ADDR_VTBL_DECK_CONSTRUCTION_MENU            = 0x00859870,
		ADDR_VTBL_DECK_CONSTRUCTION_CHR_SELECT_MENU = 0x00859980,
		ADDR_VTBL_CHANGE_KEYS_MENU                  = 0x00859A3C,
		ADDR_VTBL_PROFILE_MENU                      = 0x00859BD0,
		ADDR_VTBL_FXMANAGER_INFOFX                  = 0x0085B4A4,
		ADDR_VTBL_FX_INFOFX                         = 0x0085B4CC,
		ADDR_VTBL_CGAGE                             = 0x0087109C,
		ADDR_VTBL_CDESIGN_OBJECT                    = 0x008710C4,
		ADDR_VTBL_CDESIGN_SPRITE                    = 0x008710E4,
		ADDR_VTBL_CDESIGN_GAUGE                     = 0x00871104,
		ADDR_VTBL_CDESIGN_NUMBER                    = 0x00871124,
		ADDR_VTBL_BITMAPDATA                        = 0x00871474,
		ADDR_VTBL_PACKAGEREADER                     = 0x0087148C,

		ADDR_SWR_UNLINKED                           = 0x0088291C,
		ADDR_MENU_MODE                              = 0x00882A94,
		ADDR_RENDERER                               = 0x00896B4C,
		ADDR_CURRENT_PALETTE                        = 0x00896B88,
		ADDR_ACTIVE_WEATHER                         = 0x008971C0,
		ADDR_DISPLAYED_WEATHER                      = 0x008971C4,
		ADDR_PRACTICE_SETTINGS_STRUCT               = 0x008971C8,
		ADDR_WEATHER_COUNTER                        = 0x008971CC,
		ADDR_LOADED_STAGE_ID                        = 0x008971CE,
		ADDR_TIME_ELAPSED                           = 0x008985D8,
		ADDR_GAME_DATA_MANAGER                      = 0x008985DC,
		ADDR_BATTLE_MANAGER                         = 0x008985E4,
		ADDR_CAMERA_OBJ                             = 0x00898600,
		ADDR_SUB_MODE                               = 0x00898688,
		ADDR_COMM_MODE                              = 0x00898690,
		ADDR_PNETOBJECT                             = 0x008986A0,
		ADDR_INPUT_MANAGER                          = 0x00898718,
		ADDR_PLAYER1_PROFILE                        = 0x00898868,
		ADDR_PLAYER2_PROFILE                        = 0x00899054,
		ADDR_GAME_PARAMS                            = 0x00899D08,
		ADDR_LCHARID                                = 0x00899D10,
		ADDR_RCHARID                                = 0x00899D30,
		ADDR_INPUT_MANAGER_CLUSTER                  = 0x0089A248,
		ADDR_MENU_LIST                              = 0x0089A884,
		ADDR_TEXTURE_MANAGER                        = 0x0089FF08,
		ADDR_WINDOW_HWND                            = 0x0089FF90,
		ADDR_LOAD_GRAPHICS_THREAD                   = 0x0089FFF4,
		ADDR_LOAD_GRAPHICS_THREAD_ID                = 0x0089FFF8,
		ADDR_CURRENT_SCENE                          = 0x008A000C,
		ADDR_SCENE_ID_NEW                           = 0x008A0040,
		ADDR_SCENE_ID                               = 0x008A0044,
		ADDR_D3D9_DEVICE                            = 0x008A0E30,
	};
}

#endif //SOKULIB_SOKUADDRESSES_HPP
