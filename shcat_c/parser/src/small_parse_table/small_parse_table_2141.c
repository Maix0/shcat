/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2141.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10705(t_small_parse_table_array *v)
{
	v->a[214100] = aux_sym_number_token2;
	v->a[214101] = actions(1157);
	v->a[214102] = 1;
	v->a[214103] = anon_sym_DOLLAR_LBRACE;
	v->a[214104] = actions(1159);
	v->a[214105] = 1;
	v->a[214106] = anon_sym_DOLLAR_LPAREN;
	v->a[214107] = actions(1163);
	v->a[214108] = 1;
	v->a[214109] = anon_sym_DOLLAR_BQUOTE;
	v->a[214110] = actions(1169);
	v->a[214111] = 1;
	v->a[214112] = sym__brace_start;
	v->a[214113] = actions(3060);
	v->a[214114] = 1;
	v->a[214115] = anon_sym_BQUOTE;
	v->a[214116] = actions(10188);
	v->a[214117] = 1;
	v->a[214118] = sym_word;
	v->a[214119] = actions(10196);
	small_parse_table_10706(v);
}

void	small_parse_table_10706(t_small_parse_table_array *v)
{
	v->a[214120] = 1;
	v->a[214121] = sym__comment_word;
	v->a[214122] = actions(10198);
	v->a[214123] = 1;
	v->a[214124] = anon_sym_DOLLAR;
	v->a[214125] = actions(1129);
	v->a[214126] = 2;
	v->a[214127] = anon_sym_LPAREN_LPAREN;
	v->a[214128] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[214129] = actions(1165);
	v->a[214130] = 2;
	v->a[214131] = anon_sym_LT_LPAREN;
	v->a[214132] = anon_sym_GT_LPAREN;
	v->a[214133] = actions(10192);
	v->a[214134] = 2;
	v->a[214135] = sym_test_operator;
	v->a[214136] = sym__special_character;
	v->a[214137] = actions(10194);
	v->a[214138] = 3;
	v->a[214139] = sym__bare_dollar;
	small_parse_table_10707(v);
}

void	small_parse_table_10707(t_small_parse_table_array *v)
{
	v->a[214140] = sym_raw_string;
	v->a[214141] = sym_ansi_c_string;
	v->a[214142] = state(2392);
	v->a[214143] = 9;
	v->a[214144] = sym_arithmetic_expansion;
	v->a[214145] = sym_brace_expression;
	v->a[214146] = sym_string;
	v->a[214147] = sym_translated_string;
	v->a[214148] = sym_number;
	v->a[214149] = sym_simple_expansion;
	v->a[214150] = sym_expansion;
	v->a[214151] = sym_command_substitution;
	v->a[214152] = sym_process_substitution;
	v->a[214153] = 20;
	v->a[214154] = actions(71);
	v->a[214155] = 1;
	v->a[214156] = sym_comment;
	v->a[214157] = actions(3026);
	v->a[214158] = 1;
	v->a[214159] = anon_sym_DOLLAR;
	small_parse_table_10708(v);
}

void	small_parse_table_10708(t_small_parse_table_array *v)
{
	v->a[214160] = actions(3032);
	v->a[214161] = 1;
	v->a[214162] = aux_sym_number_token1;
	v->a[214163] = actions(3034);
	v->a[214164] = 1;
	v->a[214165] = aux_sym_number_token2;
	v->a[214166] = actions(3038);
	v->a[214167] = 1;
	v->a[214168] = anon_sym_DOLLAR_LPAREN;
	v->a[214169] = actions(3048);
	v->a[214170] = 1;
	v->a[214171] = sym__brace_start;
	v->a[214172] = actions(10134);
	v->a[214173] = 1;
	v->a[214174] = anon_sym_DOLLAR_LBRACK;
	v->a[214175] = actions(10136);
	v->a[214176] = 1;
	v->a[214177] = sym__special_character;
	v->a[214178] = actions(10138);
	v->a[214179] = 1;
	small_parse_table_10709(v);
}

void	small_parse_table_10709(t_small_parse_table_array *v)
{
	v->a[214180] = anon_sym_DQUOTE;
	v->a[214181] = actions(10142);
	v->a[214182] = 1;
	v->a[214183] = anon_sym_DOLLAR_LBRACE;
	v->a[214184] = actions(10144);
	v->a[214185] = 1;
	v->a[214186] = anon_sym_BQUOTE;
	v->a[214187] = actions(10146);
	v->a[214188] = 1;
	v->a[214189] = anon_sym_DOLLAR_BQUOTE;
	v->a[214190] = actions(10200);
	v->a[214191] = 1;
	v->a[214192] = sym_word;
	v->a[214193] = actions(10204);
	v->a[214194] = 1;
	v->a[214195] = sym_test_operator;
	v->a[214196] = state(4527);
	v->a[214197] = 1;
	v->a[214198] = aux_sym__literal_repeat1;
	v->a[214199] = state(4885);
	small_parse_table_10710(v);
}

/* EOF small_parse_table_2141.c */
