/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_671.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3355(t_small_parse_table_array *v)
{
	v->a[67100] = actions(3);
	v->a[67101] = 1;
	v->a[67102] = sym_comment;
	v->a[67103] = actions(1009);
	v->a[67104] = 3;
	v->a[67105] = sym_file_descriptor;
	v->a[67106] = sym__concat;
	v->a[67107] = sym_variable_name;
	v->a[67108] = actions(1007);
	v->a[67109] = 18;
	v->a[67110] = anon_sym_LT;
	v->a[67111] = anon_sym_GT;
	v->a[67112] = anon_sym_GT_GT;
	v->a[67113] = anon_sym_LT_AMP;
	v->a[67114] = anon_sym_GT_AMP;
	v->a[67115] = anon_sym_GT_PIPE;
	v->a[67116] = anon_sym_LT_AMP_DASH;
	v->a[67117] = anon_sym_GT_AMP_DASH;
	v->a[67118] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67119] = aux_sym_concatenation_token1;
	small_parse_table_3356(v);
}

void	small_parse_table_3356(t_small_parse_table_array *v)
{
	v->a[67120] = anon_sym_DOLLAR;
	v->a[67121] = anon_sym_DQUOTE;
	v->a[67122] = sym_raw_string;
	v->a[67123] = sym_number;
	v->a[67124] = anon_sym_DOLLAR_LBRACE;
	v->a[67125] = anon_sym_DOLLAR_LPAREN;
	v->a[67126] = anon_sym_BQUOTE;
	v->a[67127] = sym_word;
	v->a[67128] = 3;
	v->a[67129] = actions(3);
	v->a[67130] = 1;
	v->a[67131] = sym_comment;
	v->a[67132] = actions(1005);
	v->a[67133] = 3;
	v->a[67134] = sym_file_descriptor;
	v->a[67135] = sym__concat;
	v->a[67136] = sym_variable_name;
	v->a[67137] = actions(1003);
	v->a[67138] = 18;
	v->a[67139] = anon_sym_LT;
	small_parse_table_3357(v);
}

void	small_parse_table_3357(t_small_parse_table_array *v)
{
	v->a[67140] = anon_sym_GT;
	v->a[67141] = anon_sym_GT_GT;
	v->a[67142] = anon_sym_LT_AMP;
	v->a[67143] = anon_sym_GT_AMP;
	v->a[67144] = anon_sym_GT_PIPE;
	v->a[67145] = anon_sym_LT_AMP_DASH;
	v->a[67146] = anon_sym_GT_AMP_DASH;
	v->a[67147] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67148] = aux_sym_concatenation_token1;
	v->a[67149] = anon_sym_DOLLAR;
	v->a[67150] = anon_sym_DQUOTE;
	v->a[67151] = sym_raw_string;
	v->a[67152] = sym_number;
	v->a[67153] = anon_sym_DOLLAR_LBRACE;
	v->a[67154] = anon_sym_DOLLAR_LPAREN;
	v->a[67155] = anon_sym_BQUOTE;
	v->a[67156] = sym_word;
	v->a[67157] = 10;
	v->a[67158] = actions(3);
	v->a[67159] = 1;
	small_parse_table_3358(v);
}

void	small_parse_table_3358(t_small_parse_table_array *v)
{
	v->a[67160] = sym_comment;
	v->a[67161] = actions(2065);
	v->a[67162] = 1;
	v->a[67163] = sym_file_descriptor;
	v->a[67164] = actions(2189);
	v->a[67165] = 1;
	v->a[67166] = aux_sym_heredoc_redirect_token1;
	v->a[67167] = state(777);
	v->a[67168] = 1;
	v->a[67169] = sym_terminator;
	v->a[67170] = actions(754);
	v->a[67171] = 2;
	v->a[67172] = anon_sym_LT_LT;
	v->a[67173] = anon_sym_LT_LT_DASH;
	v->a[67174] = actions(924);
	v->a[67175] = 2;
	v->a[67176] = anon_sym_AMP_AMP;
	v->a[67177] = anon_sym_PIPE_PIPE;
	v->a[67178] = actions(2063);
	v->a[67179] = 2;
	small_parse_table_3359(v);
}

void	small_parse_table_3359(t_small_parse_table_array *v)
{
	v->a[67180] = anon_sym_LT_AMP_DASH;
	v->a[67181] = anon_sym_GT_AMP_DASH;
	v->a[67182] = actions(1045);
	v->a[67183] = 3;
	v->a[67184] = anon_sym_SEMI_SEMI;
	v->a[67185] = anon_sym_AMP;
	v->a[67186] = anon_sym_SEMI;
	v->a[67187] = state(1268);
	v->a[67188] = 3;
	v->a[67189] = sym_file_redirect;
	v->a[67190] = sym_heredoc_redirect;
	v->a[67191] = aux_sym_redirected_statement_repeat1;
	v->a[67192] = actions(2061);
	v->a[67193] = 6;
	v->a[67194] = anon_sym_LT;
	v->a[67195] = anon_sym_GT;
	v->a[67196] = anon_sym_GT_GT;
	v->a[67197] = anon_sym_LT_AMP;
	v->a[67198] = anon_sym_GT_AMP;
	v->a[67199] = anon_sym_GT_PIPE;
	small_parse_table_3360(v);
}

/* EOF small_parse_table_671.c */
