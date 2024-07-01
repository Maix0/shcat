/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_601.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3005(t_small_parse_table_array *v)
{
	v->a[60100] = anon_sym_DOLLAR_LBRACE;
	v->a[60101] = actions(1646);
	v->a[60102] = 1;
	v->a[60103] = anon_sym_DOLLAR_LPAREN;
	v->a[60104] = actions(1648);
	v->a[60105] = 1;
	v->a[60106] = anon_sym_BQUOTE;
	v->a[60107] = actions(1650);
	v->a[60108] = 1;
	v->a[60109] = sym_extglob_pattern;
	v->a[60110] = state(1139);
	v->a[60111] = 1;
	v->a[60112] = aux_sym_case_statement_repeat1;
	v->a[60113] = state(1713);
	v->a[60114] = 1;
	v->a[60115] = sym_case_item;
	v->a[60116] = state(1951);
	v->a[60117] = 1;
	v->a[60118] = sym__case_item_last;
	v->a[60119] = state(1871);
	small_parse_table_3006(v);
}

void	small_parse_table_3006(t_small_parse_table_array *v)
{
	v->a[60120] = 2;
	v->a[60121] = sym_concatenation;
	v->a[60122] = sym__extglob_blob;
	v->a[60123] = actions(1630);
	v->a[60124] = 3;
	v->a[60125] = sym_raw_string;
	v->a[60126] = sym_number;
	v->a[60127] = sym_word;
	v->a[60128] = state(1804);
	v->a[60129] = 5;
	v->a[60130] = sym_arithmetic_expansion;
	v->a[60131] = sym_string;
	v->a[60132] = sym_simple_expansion;
	v->a[60133] = sym_expansion;
	v->a[60134] = sym_command_substitution;
	v->a[60135] = 15;
	v->a[60136] = actions(3);
	v->a[60137] = 1;
	v->a[60138] = sym_comment;
	v->a[60139] = actions(1634);
	small_parse_table_3007(v);
}

void	small_parse_table_3007(t_small_parse_table_array *v)
{
	v->a[60140] = 1;
	v->a[60141] = anon_sym_LPAREN;
	v->a[60142] = actions(1638);
	v->a[60143] = 1;
	v->a[60144] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60145] = actions(1640);
	v->a[60146] = 1;
	v->a[60147] = anon_sym_DOLLAR;
	v->a[60148] = actions(1642);
	v->a[60149] = 1;
	v->a[60150] = anon_sym_DQUOTE;
	v->a[60151] = actions(1644);
	v->a[60152] = 1;
	v->a[60153] = anon_sym_DOLLAR_LBRACE;
	v->a[60154] = actions(1646);
	v->a[60155] = 1;
	v->a[60156] = anon_sym_DOLLAR_LPAREN;
	v->a[60157] = actions(1648);
	v->a[60158] = 1;
	v->a[60159] = anon_sym_BQUOTE;
	small_parse_table_3008(v);
}

void	small_parse_table_3008(t_small_parse_table_array *v)
{
	v->a[60160] = actions(1650);
	v->a[60161] = 1;
	v->a[60162] = sym_extglob_pattern;
	v->a[60163] = state(1139);
	v->a[60164] = 1;
	v->a[60165] = aux_sym_case_statement_repeat1;
	v->a[60166] = state(1713);
	v->a[60167] = 1;
	v->a[60168] = sym_case_item;
	v->a[60169] = state(1953);
	v->a[60170] = 1;
	v->a[60171] = sym__case_item_last;
	v->a[60172] = state(1871);
	v->a[60173] = 2;
	v->a[60174] = sym_concatenation;
	v->a[60175] = sym__extglob_blob;
	v->a[60176] = actions(1630);
	v->a[60177] = 3;
	v->a[60178] = sym_raw_string;
	v->a[60179] = sym_number;
	small_parse_table_3009(v);
}

void	small_parse_table_3009(t_small_parse_table_array *v)
{
	v->a[60180] = sym_word;
	v->a[60181] = state(1804);
	v->a[60182] = 5;
	v->a[60183] = sym_arithmetic_expansion;
	v->a[60184] = sym_string;
	v->a[60185] = sym_simple_expansion;
	v->a[60186] = sym_expansion;
	v->a[60187] = sym_command_substitution;
	v->a[60188] = 15;
	v->a[60189] = actions(3);
	v->a[60190] = 1;
	v->a[60191] = sym_comment;
	v->a[60192] = actions(1634);
	v->a[60193] = 1;
	v->a[60194] = anon_sym_LPAREN;
	v->a[60195] = actions(1638);
	v->a[60196] = 1;
	v->a[60197] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60198] = actions(1640);
	v->a[60199] = 1;
	small_parse_table_3010(v);
}

/* EOF small_parse_table_601.c */
