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
	v->a[19100] = anon_sym_GT;
	v->a[19101] = anon_sym_GT_GT;
	v->a[19102] = anon_sym_LT_AMP;
	v->a[19103] = anon_sym_GT_AMP;
	v->a[19104] = anon_sym_GT_PIPE;
	v->a[19105] = anon_sym_LT_GT;
	v->a[19106] = anon_sym_LT_LT;
	v->a[19107] = anon_sym_LT_LT_DASH;
	v->a[19108] = aux_sym_heredoc_redirect_token1;
	v->a[19109] = anon_sym_SEMI;
	v->a[19110] = 16;
	v->a[19111] = actions(3);
	v->a[19112] = 1;
	v->a[19113] = sym_comment;
	v->a[19114] = actions(17);
	v->a[19115] = 1;
	v->a[19116] = anon_sym_LPAREN;
	v->a[19117] = actions(445);
	v->a[19118] = 1;
	v->a[19119] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_956(v);
}

void	small_parse_table_956(t_small_parse_table_array *v)
{
	v->a[19120] = actions(447);
	v->a[19121] = 1;
	v->a[19122] = anon_sym_DOLLAR;
	v->a[19123] = actions(449);
	v->a[19124] = 1;
	v->a[19125] = anon_sym_DQUOTE;
	v->a[19126] = actions(451);
	v->a[19127] = 1;
	v->a[19128] = anon_sym_DOLLAR_LBRACE;
	v->a[19129] = actions(453);
	v->a[19130] = 1;
	v->a[19131] = anon_sym_DOLLAR_LPAREN;
	v->a[19132] = actions(455);
	v->a[19133] = 1;
	v->a[19134] = anon_sym_BQUOTE;
	v->a[19135] = actions(457);
	v->a[19136] = 1;
	v->a[19137] = sym__bare_dollar;
	v->a[19138] = state(206);
	v->a[19139] = 1;
	small_parse_table_957(v);
}

void	small_parse_table_957(t_small_parse_table_array *v)
{
	v->a[19140] = aux_sym_command_repeat2;
	v->a[19141] = state(694);
	v->a[19142] = 1;
	v->a[19143] = sym_concatenation;
	v->a[19144] = state(1157);
	v->a[19145] = 1;
	v->a[19146] = sym_subshell;
	v->a[19147] = actions(473);
	v->a[19148] = 2;
	v->a[19149] = sym_file_descriptor;
	v->a[19150] = ts_builtin_sym_end;
	v->a[19151] = actions(443);
	v->a[19152] = 3;
	v->a[19153] = sym_raw_string;
	v->a[19154] = sym_number;
	v->a[19155] = sym_word;
	v->a[19156] = state(418);
	v->a[19157] = 5;
	v->a[19158] = sym_arithmetic_expansion;
	v->a[19159] = sym_string;
	small_parse_table_958(v);
}

void	small_parse_table_958(t_small_parse_table_array *v)
{
	v->a[19160] = sym_simple_expansion;
	v->a[19161] = sym_expansion;
	v->a[19162] = sym_command_substitution;
	v->a[19163] = actions(471);
	v->a[19164] = 15;
	v->a[19165] = anon_sym_PIPE;
	v->a[19166] = anon_sym_SEMI_SEMI;
	v->a[19167] = anon_sym_AMP_AMP;
	v->a[19168] = anon_sym_PIPE_PIPE;
	v->a[19169] = anon_sym_LT;
	v->a[19170] = anon_sym_GT;
	v->a[19171] = anon_sym_GT_GT;
	v->a[19172] = anon_sym_LT_AMP;
	v->a[19173] = anon_sym_GT_AMP;
	v->a[19174] = anon_sym_GT_PIPE;
	v->a[19175] = anon_sym_LT_GT;
	v->a[19176] = anon_sym_LT_LT;
	v->a[19177] = anon_sym_LT_LT_DASH;
	v->a[19178] = aux_sym_heredoc_redirect_token1;
	v->a[19179] = anon_sym_SEMI;
	small_parse_table_959(v);
}

void	small_parse_table_959(t_small_parse_table_array *v)
{
	v->a[19180] = 6;
	v->a[19181] = actions(3);
	v->a[19182] = 1;
	v->a[19183] = sym_comment;
	v->a[19184] = actions(367);
	v->a[19185] = 1;
	v->a[19186] = sym_file_descriptor;
	v->a[19187] = actions(491);
	v->a[19188] = 1;
	v->a[19189] = sym_variable_name;
	v->a[19190] = actions(489);
	v->a[19191] = 2;
	v->a[19192] = aux_sym__simple_variable_name_token1;
	v->a[19193] = aux_sym__multiline_variable_name_token1;
	v->a[19194] = actions(487);
	v->a[19195] = 8;
	v->a[19196] = anon_sym_BANG;
	v->a[19197] = anon_sym_DASH;
	v->a[19198] = anon_sym_STAR;
	v->a[19199] = anon_sym_QMARK;
	small_parse_table_960(v);
}

/* EOF small_parse_table_191.c */
