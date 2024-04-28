/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_191.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_955(t_small_parse_table_array *v)
{
	v->a[19100] = anon_sym_LT_AMP_DASH;
	v->a[19101] = anon_sym_GT_AMP_DASH;
	v->a[19102] = actions(3749);
	v->a[19103] = 2;
	v->a[19104] = anon_sym_LT_LPAREN;
	v->a[19105] = anon_sym_GT_LPAREN;
	v->a[19106] = actions(3713);
	v->a[19107] = 3;
	v->a[19108] = sym_raw_string;
	v->a[19109] = sym_ansi_c_string;
	v->a[19110] = sym_word;
	v->a[19111] = state(5504);
	v->a[19112] = 3;
	v->a[19113] = sym_file_redirect;
	v->a[19114] = sym_herestring_redirect;
	v->a[19115] = aux_sym_redirected_statement_repeat2;
	v->a[19116] = actions(3721);
	v->a[19117] = 8;
	v->a[19118] = anon_sym_LT;
	v->a[19119] = anon_sym_GT;
	small_parse_table_956(v);
}

void	small_parse_table_956(t_small_parse_table_array *v)
{
	v->a[19120] = anon_sym_GT_GT;
	v->a[19121] = anon_sym_AMP_GT;
	v->a[19122] = anon_sym_AMP_GT_GT;
	v->a[19123] = anon_sym_LT_AMP;
	v->a[19124] = anon_sym_GT_AMP;
	v->a[19125] = anon_sym_GT_PIPE;
	v->a[19126] = state(5062);
	v->a[19127] = 9;
	v->a[19128] = sym_arithmetic_expansion;
	v->a[19129] = sym_brace_expression;
	v->a[19130] = sym_string;
	v->a[19131] = sym_translated_string;
	v->a[19132] = sym_number;
	v->a[19133] = sym_simple_expansion;
	v->a[19134] = sym_expansion;
	v->a[19135] = sym_command_substitution;
	v->a[19136] = sym_process_substitution;
	v->a[19137] = 35;
	v->a[19138] = actions(71);
	v->a[19139] = 1;
	small_parse_table_957(v);
}

void	small_parse_table_957(t_small_parse_table_array *v)
{
	v->a[19140] = sym_comment;
	v->a[19141] = actions(237);
	v->a[19142] = 1;
	v->a[19143] = sym_word;
	v->a[19144] = actions(258);
	v->a[19145] = 1;
	v->a[19146] = anon_sym_DOLLAR;
	v->a[19147] = actions(264);
	v->a[19148] = 1;
	v->a[19149] = aux_sym_number_token1;
	v->a[19150] = actions(266);
	v->a[19151] = 1;
	v->a[19152] = aux_sym_number_token2;
	v->a[19153] = actions(270);
	v->a[19154] = 1;
	v->a[19155] = anon_sym_DOLLAR_LPAREN;
	v->a[19156] = actions(282);
	v->a[19157] = 1;
	v->a[19158] = sym_test_operator;
	v->a[19159] = actions(284);
	small_parse_table_958(v);
}

void	small_parse_table_958(t_small_parse_table_array *v)
{
	v->a[19160] = 1;
	v->a[19161] = sym__brace_start;
	v->a[19162] = actions(1075);
	v->a[19163] = 1;
	v->a[19164] = anon_sym_DOLLAR_LBRACK;
	v->a[19165] = actions(1079);
	v->a[19166] = 1;
	v->a[19167] = sym__special_character;
	v->a[19168] = actions(1081);
	v->a[19169] = 1;
	v->a[19170] = anon_sym_DQUOTE;
	v->a[19171] = actions(1085);
	v->a[19172] = 1;
	v->a[19173] = anon_sym_DOLLAR_LBRACE;
	v->a[19174] = actions(1087);
	v->a[19175] = 1;
	v->a[19176] = anon_sym_DOLLAR_BQUOTE;
	v->a[19177] = actions(3588);
	v->a[19178] = 1;
	v->a[19179] = anon_sym_LPAREN;
	small_parse_table_959(v);
}

void	small_parse_table_959(t_small_parse_table_array *v)
{
	v->a[19180] = actions(3590);
	v->a[19181] = 1;
	v->a[19182] = anon_sym_BANG;
	v->a[19183] = actions(3596);
	v->a[19184] = 1;
	v->a[19185] = anon_sym_TILDE;
	v->a[19186] = actions(3598);
	v->a[19187] = 1;
	v->a[19188] = anon_sym_BQUOTE;
	v->a[19189] = actions(3602);
	v->a[19190] = 1;
	v->a[19191] = sym_variable_name;
	v->a[19192] = actions(3759);
	v->a[19193] = 1;
	v->a[19194] = aux_sym__simple_variable_name_token1;
	v->a[19195] = state(2509);
	v->a[19196] = 1;
	v->a[19197] = sym_command_substitution;
	v->a[19198] = state(2690);
	v->a[19199] = 1;
	small_parse_table_960(v);
}

/* EOF small_parse_table_191.c */
