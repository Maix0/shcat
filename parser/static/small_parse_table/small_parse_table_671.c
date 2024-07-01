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
	v->a[67103] = actions(1074);
	v->a[67104] = 1;
	v->a[67105] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67106] = actions(1076);
	v->a[67107] = 1;
	v->a[67108] = anon_sym_DOLLAR;
	v->a[67109] = actions(1078);
	v->a[67110] = 1;
	v->a[67111] = anon_sym_DQUOTE;
	v->a[67112] = actions(1080);
	v->a[67113] = 1;
	v->a[67114] = anon_sym_DOLLAR_LBRACE;
	v->a[67115] = actions(1082);
	v->a[67116] = 1;
	v->a[67117] = anon_sym_DOLLAR_LPAREN;
	v->a[67118] = actions(1084);
	v->a[67119] = 1;
	small_parse_table_3356(v);
}

void	small_parse_table_3356(t_small_parse_table_array *v)
{
	v->a[67120] = anon_sym_BQUOTE;
	v->a[67121] = actions(2548);
	v->a[67122] = 1;
	v->a[67123] = aux_sym_heredoc_redirect_token1;
	v->a[67124] = state(1338);
	v->a[67125] = 1;
	v->a[67126] = aux_sym__heredoc_command;
	v->a[67127] = state(1721);
	v->a[67128] = 1;
	v->a[67129] = sym_concatenation;
	v->a[67130] = actions(1064);
	v->a[67131] = 3;
	v->a[67132] = sym_raw_string;
	v->a[67133] = sym_number;
	v->a[67134] = sym_word;
	v->a[67135] = state(1573);
	v->a[67136] = 5;
	v->a[67137] = sym_arithmetic_expansion;
	v->a[67138] = sym_string;
	v->a[67139] = sym_simple_expansion;
	small_parse_table_3357(v);
}

void	small_parse_table_3357(t_small_parse_table_array *v)
{
	v->a[67140] = sym_expansion;
	v->a[67141] = sym_command_substitution;
	v->a[67142] = 10;
	v->a[67143] = actions(3);
	v->a[67144] = 1;
	v->a[67145] = sym_comment;
	v->a[67146] = actions(107);
	v->a[67147] = 1;
	v->a[67148] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67149] = actions(109);
	v->a[67150] = 1;
	v->a[67151] = anon_sym_DOLLAR;
	v->a[67152] = actions(111);
	v->a[67153] = 1;
	v->a[67154] = anon_sym_DQUOTE;
	v->a[67155] = actions(115);
	v->a[67156] = 1;
	v->a[67157] = anon_sym_DOLLAR_LBRACE;
	v->a[67158] = actions(117);
	v->a[67159] = 1;
	small_parse_table_3358(v);
}

void	small_parse_table_3358(t_small_parse_table_array *v)
{
	v->a[67160] = anon_sym_DOLLAR_LPAREN;
	v->a[67161] = actions(119);
	v->a[67162] = 1;
	v->a[67163] = anon_sym_BQUOTE;
	v->a[67164] = actions(2552);
	v->a[67165] = 1;
	v->a[67166] = sym__bare_dollar;
	v->a[67167] = actions(2550);
	v->a[67168] = 5;
	v->a[67169] = aux_sym_concatenation_token1;
	v->a[67170] = sym_raw_string;
	v->a[67171] = sym_number;
	v->a[67172] = sym__comment_word;
	v->a[67173] = sym_word;
	v->a[67174] = state(376);
	v->a[67175] = 5;
	v->a[67176] = sym_arithmetic_expansion;
	v->a[67177] = sym_string;
	v->a[67178] = sym_simple_expansion;
	v->a[67179] = sym_expansion;
	small_parse_table_3359(v);
}

void	small_parse_table_3359(t_small_parse_table_array *v)
{
	v->a[67180] = sym_command_substitution;
	v->a[67181] = 10;
	v->a[67182] = actions(3);
	v->a[67183] = 1;
	v->a[67184] = sym_comment;
	v->a[67185] = actions(479);
	v->a[67186] = 1;
	v->a[67187] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67188] = actions(483);
	v->a[67189] = 1;
	v->a[67190] = anon_sym_DQUOTE;
	v->a[67191] = actions(485);
	v->a[67192] = 1;
	v->a[67193] = anon_sym_DOLLAR_LBRACE;
	v->a[67194] = actions(487);
	v->a[67195] = 1;
	v->a[67196] = anon_sym_DOLLAR_LPAREN;
	v->a[67197] = actions(489);
	v->a[67198] = 1;
	v->a[67199] = anon_sym_BQUOTE;
	small_parse_table_3360(v);
}

/* EOF small_parse_table_671.c */
