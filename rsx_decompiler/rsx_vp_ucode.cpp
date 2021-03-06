#include "rsx_vp_ucode.h"

namespace rsx
{
	namespace vertex_program
	{
		const std::string input_attrib_names[0x10] =
		{
			"in_pos", "in_weight", "in_normal",
			"in_diff_color", "in_spec_color",
			"in_fog",
			"in_point_size", "in_7",
			"in_tc0", "in_tc1", "in_tc2", "in_tc3",
			"in_tc4", "in_tc5", "in_tc6", "in_tc7"
		};

		static const std::string output_attrib_names[22] =
		{
			"front_diffuse_color",
			"front_specular_color",
			"back_diffuse_color",
			"back_specular_color",
			"fog",
			"point_size",
			"uc0",
			"uc1",
			"uc2",
			"uc3",
			"uc4",
			"uc5",
			"tex8",
			"tex9",
			"tex0",
			"tex1",
			"tex2",
			"tex3",
			"tex4",
			"tex5",
			"tex6",
			"tex7",
		};

		const std::string sca_op_names[0x20] =
		{
			"NOP", "MOV", "RCP", "RCC", "RSQ", "EXP", "LOG",
			"LIT", "BRA", "BRI", "CAL", "CLI", "RET", "LG2",
			"EX2", "SIN", "COS", "BRB", "CLB", "PSH", "POP"
		};

		const std::string vec_op_names[0x20] =
		{
			"NOP", "MOV", "MUL", "ADD", "MAD", "DP3", "DPH", "DP4",
			"DST", "MIN", "MAX", "SLT", "SGE", "ARL", "FRC", "FLR",
			"SEQ", "SFL", "SGT", "SLE", "SNE", "STR", "SSG", {},
			{}, "TXL"
		};
	}
}
