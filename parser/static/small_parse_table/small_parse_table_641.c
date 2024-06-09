/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_641.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3205(t_small_parse_table_array *v)
{
	v->a[64100] = 1;
	v->a[64101] = sym_comment;
	v->a[64102] = actions(2113);
	v->a[64103] = 1;
	v->a[64104] = anon_sym_esac;
	v->a[64105] = actions(2115);
	v->a[64106] = 1;
	v->a[64107] = anon_sym_LPAREN;
	v->a[64108] = actions(2119);
	v->a[64109] = 1;
	v->a[64110] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64111] = actions(2121);
	v->a[64112] = 1;
	v->a[64113] = anon_sym_DOLLAR;
	v->a[64114] = actions(2123);
	v->a[64115] = 1;
	v->a[64116] = anon_sym_DQUOTE;
	v->a[64117] = actions(2125);
	v->a[64118] = 1;
	v->a[64119] = aux_sym_number_token1;
	small_parse_table_3206(v);
}

void	small_parse_table_3206(t_small_parse_table_array *v)
{
	v->a[64120] = actions(2127);
	v->a[64121] = 1;
	v->a[64122] = aux_sym_number_token2;
	v->a[64123] = actions(2129);
	v->a[64124] = 1;
	v->a[64125] = anon_sym_DOLLAR_LBRACE;
	v->a[64126] = actions(2131);
	v->a[64127] = 1;
	v->a[64128] = anon_sym_DOLLAR_LPAREN;
	v->a[64129] = actions(2133);
	v->a[64130] = 1;
	v->a[64131] = anon_sym_BQUOTE;
	v->a[64132] = actions(2135);
	v->a[64133] = 1;
	v->a[64134] = sym_extglob_pattern;
	v->a[64135] = state(1125);
	v->a[64136] = 1;
	v->a[64137] = aux_sym_case_statement_repeat1;
	v->a[64138] = state(1786);
	v->a[64139] = 1;
	small_parse_table_3207(v);
}

void	small_parse_table_3207(t_small_parse_table_array *v)
{
	v->a[64140] = sym_case_item;
	v->a[64141] = state(2058);
	v->a[64142] = 1;
	v->a[64143] = sym__case_item_last;
	v->a[64144] = actions(2111);
	v->a[64145] = 2;
	v->a[64146] = sym_raw_string;
	v->a[64147] = sym_word;
	v->a[64148] = state(2016);
	v->a[64149] = 2;
	v->a[64150] = sym_concatenation;
	v->a[64151] = sym__extglob_blob;
	v->a[64152] = state(1896);
	v->a[64153] = 6;
	v->a[64154] = sym_arithmetic_expansion;
	v->a[64155] = sym_string;
	v->a[64156] = sym_number;
	v->a[64157] = sym_simple_expansion;
	v->a[64158] = sym_expansion;
	v->a[64159] = sym_command_substitution;
	small_parse_table_3208(v);
}

void	small_parse_table_3208(t_small_parse_table_array *v)
{
	v->a[64160] = 5;
	v->a[64161] = actions(3);
	v->a[64162] = 1;
	v->a[64163] = sym_comment;
	v->a[64164] = actions(2314);
	v->a[64165] = 1;
	v->a[64166] = sym_variable_name;
	v->a[64167] = actions(2267);
	v->a[64168] = 2;
	v->a[64169] = sym_file_descriptor;
	v->a[64170] = aux_sym_heredoc_redirect_token1;
	v->a[64171] = state(1084);
	v->a[64172] = 2;
	v->a[64173] = sym_variable_assignment;
	v->a[64174] = aux_sym_variable_assignments_repeat1;
	v->a[64175] = actions(2265);
	v->a[64176] = 19;
	v->a[64177] = anon_sym_esac;
	v->a[64178] = anon_sym_PIPE;
	v->a[64179] = anon_sym_SEMI_SEMI;
	small_parse_table_3209(v);
}

void	small_parse_table_3209(t_small_parse_table_array *v)
{
	v->a[64180] = anon_sym_AMP_AMP;
	v->a[64181] = anon_sym_PIPE_PIPE;
	v->a[64182] = anon_sym_LT;
	v->a[64183] = anon_sym_GT;
	v->a[64184] = anon_sym_GT_GT;
	v->a[64185] = anon_sym_AMP_GT;
	v->a[64186] = anon_sym_AMP_GT_GT;
	v->a[64187] = anon_sym_LT_AMP;
	v->a[64188] = anon_sym_GT_AMP;
	v->a[64189] = anon_sym_GT_PIPE;
	v->a[64190] = anon_sym_LT_AMP_DASH;
	v->a[64191] = anon_sym_GT_AMP_DASH;
	v->a[64192] = anon_sym_LT_LT;
	v->a[64193] = anon_sym_LT_LT_DASH;
	v->a[64194] = anon_sym_AMP;
	v->a[64195] = anon_sym_SEMI;
	v->a[64196] = 11;
	v->a[64197] = actions(3);
	v->a[64198] = 1;
	v->a[64199] = sym_comment;
	small_parse_table_3210(v);
}

/* EOF small_parse_table_641.c */
