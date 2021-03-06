#include <linux/batterydata-lib.h>

static struct single_row_lut fcc_temp = {
	.x		= {-20, 0, 25, 40, 60},
	.y		= {2889, 2972, 2987, 2982, 2960},
	.cols	= 5
};

static struct single_row_lut fcc_sf = {
	.x		= {0},
	.y		= {100},
	.cols	= 1
};

static struct sf_lut rbatt_sf = {
	.rows		= 30,
	.cols		= 5,
	.row_entries		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1},
	.sf		= {
				{1023, 289, 100, 81, 77},
				{936, 296, 102, 82, 78},
				{943, 296, 102, 82, 78},
				{867, 296, 105, 84, 79},
				{818, 299, 109, 88, 81},
				{785, 282, 113, 88, 81},
				{766, 258, 118, 91, 83},
				{784, 243, 123, 98, 87},
				{837, 235, 100, 83, 80},
				{898, 229, 96, 81, 78},
				{953, 227, 97, 82, 80},
				{1001, 250, 98, 85, 82},
				{1049, 296, 101, 87, 84},
				{1102, 343, 100, 83, 80},
				{1174, 385, 101, 82, 79},
				{1349, 421, 107, 82, 79},
				{1713, 466, 111, 84, 79},
				{2232, 511, 122, 91, 83},
				{2862, 555, 142, 99, 92},
				{3447, 574, 156, 108, 98},
				{3896, 565, 158, 112, 100},
				{4408, 532, 160, 114, 102},
				{4965, 545, 169, 117, 105},
				{5815, 560, 181, 122, 108},
				{6908, 586, 197, 131, 113},
				{8455, 620, 218, 142, 119},
				{10722, 672, 244, 157, 128},
				{13895, 785, 271, 176, 139},
				{18186, 1164, 312, 204, 159},
				{24369, 1929, 473, 311, 243},
	}
};

static struct pc_temp_ocv_lut pc_temp_ocv = {
	.rows		= 31,
	.cols		= 5,
	.temp		= {-20, 0, 25, 40, 60},
	.percent	= {100, 95, 90, 85, 80, 75, 70, 65, 60, 55, 50, 45, 40, 35, 30, 25, 20, 16, 13, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0},
	.ocv		= {
				{4334, 4330, 4324, 4318, 4309},
				{4180, 4224, 4244, 4244, 4239},
				{4084, 4147, 4177, 4180, 4178},
				{4002, 4085, 4119, 4124, 4123},
				{3938, 4034, 4071, 4078, 4079},
				{3884, 3983, 4029, 4035, 4034},
				{3840, 3931, 3988, 3991, 3990},
				{3815, 3887, 3941, 3947, 3945},
				{3799, 3849, 3884, 3888, 3889},
				{3781, 3816, 3849, 3853, 3855},
				{3761, 3791, 3822, 3827, 3828},
				{3738, 3777, 3799, 3804, 3805},
				{3711, 3765, 3781, 3784, 3785},
				{3680, 3748, 3765, 3762, 3754},
				{3644, 3723, 3746, 3740, 3727},
				{3602, 3687, 3717, 3711, 3696},
				{3549, 3651, 3677, 3676, 3668},
				{3498, 3619, 3663, 3666, 3657},
				{3446, 3587, 3646, 3645, 3631},
				{3403, 3554, 3612, 3611, 3595},
				{3375, 3530, 3589, 3587, 3570},
				{3344, 3497, 3561, 3559, 3541},
				{3310, 3462, 3529, 3526, 3508},
				{3276, 3421, 3493, 3489, 3474},
				{3236, 3377, 3453, 3452, 3439},
				{3193, 3328, 3412, 3414, 3403},
				{3150, 3279, 3370, 3373, 3363},
				{3109, 3228, 3319, 3323, 3312},
				{3071, 3169, 3249, 3254, 3240},
				{3035, 3098, 3150, 3152, 3135},
				{3000, 3000, 3000, 3000, 3000}
	}
};

struct bms_battery_data LGE_BL_64SH_3000mAh_Technohill_data = {
	.fcc				= 3000,
	.fcc_temp_lut			= &fcc_temp,
	.fcc_sf_lut				= &fcc_sf,
	.pc_temp_ocv_lut		= &pc_temp_ocv,
	.rbatt_sf_lut			= &rbatt_sf,
	.default_rbatt_mohm	= 181
};
