/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_431.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2155(t_small_parse_table_array *v)
{
	v->a[43100] = anon_sym_SEMI_SEMI;
	v->a[43101] = anon_sym_AMP_AMP;
	v->a[43102] = anon_sym_PIPE_PIPE;
	v->a[43103] = anon_sym_LT;
	v->a[43104] = anon_sym_GT;
	v->a[43105] = anon_sym_GT_GT;
	v->a[43106] = anon_sym_AMP_GT;
	v->a[43107] = anon_sym_AMP_GT_GT;
	v->a[43108] = anon_sym_LT_AMP;
	v->a[43109] = anon_sym_GT_AMP;
	v->a[43110] = anon_sym_GT_PIPE;
	v->a[43111] = anon_sym_LT_AMP_DASH;
	v->a[43112] = anon_sym_GT_AMP_DASH;
	v->a[43113] = anon_sym_LT_LT;
	v->a[43114] = anon_sym_LT_LT_DASH;
	v->a[43115] = aux_sym_heredoc_redirect_token1;
	v->a[43116] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43117] = anon_sym_AMP;
	v->a[43118] = aux_sym_concatenation_token1;
	v->a[43119] = anon_sym_DOLLAR;
	small_parse_table_2156(v);
}

void	small_parse_table_2156(t_small_parse_table_array *v)
{
	v->a[43120] = anon_sym_DQUOTE;
	v->a[43121] = sym_raw_string;
	v->a[43122] = aux_sym_number_token1;
	v->a[43123] = aux_sym_number_token2;
	v->a[43124] = anon_sym_DOLLAR_LBRACE;
	v->a[43125] = anon_sym_DOLLAR_LPAREN;
	v->a[43126] = anon_sym_BQUOTE;
	v->a[43127] = sym_word;
	v->a[43128] = anon_sym_SEMI;
	v->a[43129] = 19;
	v->a[43130] = actions(3);
	v->a[43131] = 1;
	v->a[43132] = sym_comment;
	v->a[43133] = actions(63);
	v->a[43134] = 1;
	v->a[43135] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43136] = actions(65);
	v->a[43137] = 1;
	v->a[43138] = anon_sym_DOLLAR;
	v->a[43139] = actions(67);
	small_parse_table_2157(v);
}

void	small_parse_table_2157(t_small_parse_table_array *v)
{
	v->a[43140] = 1;
	v->a[43141] = anon_sym_DQUOTE;
	v->a[43142] = actions(71);
	v->a[43143] = 1;
	v->a[43144] = aux_sym_number_token1;
	v->a[43145] = actions(73);
	v->a[43146] = 1;
	v->a[43147] = aux_sym_number_token2;
	v->a[43148] = actions(75);
	v->a[43149] = 1;
	v->a[43150] = anon_sym_DOLLAR_LBRACE;
	v->a[43151] = actions(77);
	v->a[43152] = 1;
	v->a[43153] = anon_sym_DOLLAR_LPAREN;
	v->a[43154] = actions(79);
	v->a[43155] = 1;
	v->a[43156] = anon_sym_BQUOTE;
	v->a[43157] = actions(405);
	v->a[43158] = 1;
	v->a[43159] = sym_variable_name;
	small_parse_table_2158(v);
}

void	small_parse_table_2158(t_small_parse_table_array *v)
{
	v->a[43160] = actions(1102);
	v->a[43161] = 1;
	v->a[43162] = sym_file_descriptor;
	v->a[43163] = state(186);
	v->a[43164] = 1;
	v->a[43165] = sym_command_name;
	v->a[43166] = state(582);
	v->a[43167] = 1;
	v->a[43168] = sym_concatenation;
	v->a[43169] = state(1237);
	v->a[43170] = 1;
	v->a[43171] = sym_file_redirect;
	v->a[43172] = actions(69);
	v->a[43173] = 2;
	v->a[43174] = sym_raw_string;
	v->a[43175] = sym_word;
	v->a[43176] = actions(1100);
	v->a[43177] = 2;
	v->a[43178] = anon_sym_LT_AMP_DASH;
	v->a[43179] = anon_sym_GT_AMP_DASH;
	small_parse_table_2159(v);
}

void	small_parse_table_2159(t_small_parse_table_array *v)
{
	v->a[43180] = state(996);
	v->a[43181] = 2;
	v->a[43182] = sym_variable_assignment;
	v->a[43183] = aux_sym_command_repeat1;
	v->a[43184] = state(397);
	v->a[43185] = 6;
	v->a[43186] = sym_arithmetic_expansion;
	v->a[43187] = sym_string;
	v->a[43188] = sym_number;
	v->a[43189] = sym_simple_expansion;
	v->a[43190] = sym_expansion;
	v->a[43191] = sym_command_substitution;
	v->a[43192] = actions(1098);
	v->a[43193] = 8;
	v->a[43194] = anon_sym_LT;
	v->a[43195] = anon_sym_GT;
	v->a[43196] = anon_sym_GT_GT;
	v->a[43197] = anon_sym_AMP_GT;
	v->a[43198] = anon_sym_AMP_GT_GT;
	v->a[43199] = anon_sym_LT_AMP;
	small_parse_table_2160(v);
}

/* EOF small_parse_table_431.c */
