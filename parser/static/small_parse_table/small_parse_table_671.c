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
	v->a[67103] = actions(1301);
	v->a[67104] = 3;
	v->a[67105] = sym_file_descriptor;
	v->a[67106] = sym__concat;
	v->a[67107] = aux_sym_heredoc_redirect_token1;
	v->a[67108] = actions(1299);
	v->a[67109] = 20;
	v->a[67110] = anon_sym_esac;
	v->a[67111] = anon_sym_PIPE;
	v->a[67112] = anon_sym_SEMI_SEMI;
	v->a[67113] = anon_sym_AMP_AMP;
	v->a[67114] = anon_sym_PIPE_PIPE;
	v->a[67115] = anon_sym_LT;
	v->a[67116] = anon_sym_GT;
	v->a[67117] = anon_sym_GT_GT;
	v->a[67118] = anon_sym_AMP_GT;
	v->a[67119] = anon_sym_AMP_GT_GT;
	small_parse_table_3356(v);
}

void	small_parse_table_3356(t_small_parse_table_array *v)
{
	v->a[67120] = anon_sym_LT_AMP;
	v->a[67121] = anon_sym_GT_AMP;
	v->a[67122] = anon_sym_GT_PIPE;
	v->a[67123] = anon_sym_LT_AMP_DASH;
	v->a[67124] = anon_sym_GT_AMP_DASH;
	v->a[67125] = anon_sym_LT_LT;
	v->a[67126] = anon_sym_LT_LT_DASH;
	v->a[67127] = anon_sym_AMP;
	v->a[67128] = aux_sym_concatenation_token1;
	v->a[67129] = anon_sym_SEMI;
	v->a[67130] = 17;
	v->a[67131] = actions(3);
	v->a[67132] = 1;
	v->a[67133] = sym_comment;
	v->a[67134] = actions(2115);
	v->a[67135] = 1;
	v->a[67136] = anon_sym_LPAREN;
	v->a[67137] = actions(2119);
	v->a[67138] = 1;
	v->a[67139] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3357(v);
}

void	small_parse_table_3357(t_small_parse_table_array *v)
{
	v->a[67140] = actions(2121);
	v->a[67141] = 1;
	v->a[67142] = anon_sym_DOLLAR;
	v->a[67143] = actions(2123);
	v->a[67144] = 1;
	v->a[67145] = anon_sym_DQUOTE;
	v->a[67146] = actions(2125);
	v->a[67147] = 1;
	v->a[67148] = aux_sym_number_token1;
	v->a[67149] = actions(2127);
	v->a[67150] = 1;
	v->a[67151] = aux_sym_number_token2;
	v->a[67152] = actions(2129);
	v->a[67153] = 1;
	v->a[67154] = anon_sym_DOLLAR_LBRACE;
	v->a[67155] = actions(2131);
	v->a[67156] = 1;
	v->a[67157] = anon_sym_DOLLAR_LPAREN;
	v->a[67158] = actions(2133);
	v->a[67159] = 1;
	small_parse_table_3358(v);
}

void	small_parse_table_3358(t_small_parse_table_array *v)
{
	v->a[67160] = anon_sym_BQUOTE;
	v->a[67161] = actions(2135);
	v->a[67162] = 1;
	v->a[67163] = sym_extglob_pattern;
	v->a[67164] = state(1241);
	v->a[67165] = 1;
	v->a[67166] = aux_sym_case_statement_repeat1;
	v->a[67167] = state(1786);
	v->a[67168] = 1;
	v->a[67169] = sym_case_item;
	v->a[67170] = state(2167);
	v->a[67171] = 1;
	v->a[67172] = sym__case_item_last;
	v->a[67173] = actions(2111);
	v->a[67174] = 2;
	v->a[67175] = sym_raw_string;
	v->a[67176] = sym_word;
	v->a[67177] = state(2016);
	v->a[67178] = 2;
	v->a[67179] = sym_concatenation;
	small_parse_table_3359(v);
}

void	small_parse_table_3359(t_small_parse_table_array *v)
{
	v->a[67180] = sym__extglob_blob;
	v->a[67181] = state(1896);
	v->a[67182] = 6;
	v->a[67183] = sym_arithmetic_expansion;
	v->a[67184] = sym_string;
	v->a[67185] = sym_number;
	v->a[67186] = sym_simple_expansion;
	v->a[67187] = sym_expansion;
	v->a[67188] = sym_command_substitution;
	v->a[67189] = 3;
	v->a[67190] = actions(3);
	v->a[67191] = 1;
	v->a[67192] = sym_comment;
	v->a[67193] = actions(1311);
	v->a[67194] = 3;
	v->a[67195] = sym_file_descriptor;
	v->a[67196] = sym__concat;
	v->a[67197] = aux_sym_heredoc_redirect_token1;
	v->a[67198] = actions(1309);
	v->a[67199] = 20;
	small_parse_table_3360(v);
}

/* EOF small_parse_table_671.c */
