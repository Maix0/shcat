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
	v->a[19100] = actions(469);
	v->a[19101] = 1;
	v->a[19102] = anon_sym_DOLLAR_LBRACE;
	v->a[19103] = actions(471);
	v->a[19104] = 1;
	v->a[19105] = anon_sym_DOLLAR_LPAREN;
	v->a[19106] = actions(473);
	v->a[19107] = 1;
	v->a[19108] = anon_sym_BQUOTE;
	v->a[19109] = actions(475);
	v->a[19110] = 1;
	v->a[19111] = sym__bare_dollar;
	v->a[19112] = state(185);
	v->a[19113] = 1;
	v->a[19114] = aux_sym_command_repeat2;
	v->a[19115] = state(662);
	v->a[19116] = 1;
	v->a[19117] = sym_concatenation;
	v->a[19118] = state(1169);
	v->a[19119] = 1;
	small_parse_table_956(v);
}

void	small_parse_table_956(t_small_parse_table_array *v)
{
	v->a[19120] = sym_subshell;
	v->a[19121] = actions(461);
	v->a[19122] = 3;
	v->a[19123] = sym_raw_string;
	v->a[19124] = sym_number;
	v->a[19125] = sym_word;
	v->a[19126] = state(430);
	v->a[19127] = 5;
	v->a[19128] = sym_arithmetic_expansion;
	v->a[19129] = sym_string;
	v->a[19130] = sym_simple_expansion;
	v->a[19131] = sym_expansion;
	v->a[19132] = sym_command_substitution;
	v->a[19133] = actions(439);
	v->a[19134] = 17;
	v->a[19135] = anon_sym_PIPE;
	v->a[19136] = anon_sym_RPAREN;
	v->a[19137] = anon_sym_SEMI_SEMI;
	v->a[19138] = anon_sym_AMP_AMP;
	v->a[19139] = anon_sym_PIPE_PIPE;
	small_parse_table_957(v);
}

void	small_parse_table_957(t_small_parse_table_array *v)
{
	v->a[19140] = anon_sym_LT;
	v->a[19141] = anon_sym_GT;
	v->a[19142] = anon_sym_GT_GT;
	v->a[19143] = anon_sym_LT_AMP;
	v->a[19144] = anon_sym_GT_AMP;
	v->a[19145] = anon_sym_GT_PIPE;
	v->a[19146] = anon_sym_LT_GT;
	v->a[19147] = anon_sym_LT_LT;
	v->a[19148] = anon_sym_LT_LT_DASH;
	v->a[19149] = aux_sym_heredoc_redirect_token1;
	v->a[19150] = anon_sym_AMP;
	v->a[19151] = anon_sym_SEMI;
	v->a[19152] = 16;
	v->a[19153] = actions(3);
	v->a[19154] = 1;
	v->a[19155] = sym_comment;
	v->a[19156] = actions(17);
	v->a[19157] = 1;
	v->a[19158] = anon_sym_LPAREN;
	v->a[19159] = actions(479);
	small_parse_table_958(v);
}

void	small_parse_table_958(t_small_parse_table_array *v)
{
	v->a[19160] = 1;
	v->a[19161] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19162] = actions(481);
	v->a[19163] = 1;
	v->a[19164] = anon_sym_DOLLAR;
	v->a[19165] = actions(483);
	v->a[19166] = 1;
	v->a[19167] = anon_sym_DQUOTE;
	v->a[19168] = actions(485);
	v->a[19169] = 1;
	v->a[19170] = anon_sym_DOLLAR_LBRACE;
	v->a[19171] = actions(487);
	v->a[19172] = 1;
	v->a[19173] = anon_sym_DOLLAR_LPAREN;
	v->a[19174] = actions(489);
	v->a[19175] = 1;
	v->a[19176] = anon_sym_BQUOTE;
	v->a[19177] = actions(491);
	v->a[19178] = 1;
	v->a[19179] = sym__bare_dollar;
	small_parse_table_959(v);
}

void	small_parse_table_959(t_small_parse_table_array *v)
{
	v->a[19180] = state(199);
	v->a[19181] = 1;
	v->a[19182] = aux_sym_command_repeat2;
	v->a[19183] = state(637);
	v->a[19184] = 1;
	v->a[19185] = sym_concatenation;
	v->a[19186] = state(1135);
	v->a[19187] = 1;
	v->a[19188] = sym_subshell;
	v->a[19189] = actions(459);
	v->a[19190] = 2;
	v->a[19191] = sym_file_descriptor;
	v->a[19192] = ts_builtin_sym_end;
	v->a[19193] = actions(477);
	v->a[19194] = 3;
	v->a[19195] = sym_raw_string;
	v->a[19196] = sym_number;
	v->a[19197] = sym_word;
	v->a[19198] = state(431);
	v->a[19199] = 5;
	small_parse_table_960(v);
}

/* EOF small_parse_table_191.c */
