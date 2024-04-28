/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1095.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5475(t_small_parse_table_array *v)
{
	v->a[109500] = sym_test_operator;
	v->a[109501] = sym__brace_start;
	v->a[109502] = anon_sym_LPAREN_LPAREN;
	v->a[109503] = anon_sym_GT_GT;
	v->a[109504] = anon_sym_AMP_GT_GT;
	v->a[109505] = anon_sym_GT_PIPE;
	v->a[109506] = anon_sym_LT_AMP_DASH;
	v->a[109507] = anon_sym_GT_AMP_DASH;
	v->a[109508] = anon_sym_LT_LT_LT;
	v->a[109509] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109510] = anon_sym_DOLLAR_LBRACK;
	v->a[109511] = sym__special_character;
	v->a[109512] = anon_sym_DQUOTE;
	v->a[109513] = sym_raw_string;
	v->a[109514] = sym_ansi_c_string;
	v->a[109515] = anon_sym_DOLLAR_LBRACE;
	v->a[109516] = anon_sym_BQUOTE;
	v->a[109517] = anon_sym_DOLLAR_BQUOTE;
	v->a[109518] = anon_sym_LT_LPAREN;
	v->a[109519] = anon_sym_GT_LPAREN;
	small_parse_table_5476(v);
}

void	small_parse_table_5476(t_small_parse_table_array *v)
{
	v->a[109520] = 26;
	v->a[109521] = actions(71);
	v->a[109522] = 1;
	v->a[109523] = sym_comment;
	v->a[109524] = actions(107);
	v->a[109525] = 1;
	v->a[109526] = anon_sym_TILDE;
	v->a[109527] = actions(237);
	v->a[109528] = 1;
	v->a[109529] = sym_word;
	v->a[109530] = actions(248);
	v->a[109531] = 1;
	v->a[109532] = anon_sym_LPAREN;
	v->a[109533] = actions(250);
	v->a[109534] = 1;
	v->a[109535] = anon_sym_BANG;
	v->a[109536] = actions(258);
	v->a[109537] = 1;
	v->a[109538] = anon_sym_DOLLAR;
	v->a[109539] = actions(264);
	small_parse_table_5477(v);
}

void	small_parse_table_5477(t_small_parse_table_array *v)
{
	v->a[109540] = 1;
	v->a[109541] = aux_sym_number_token1;
	v->a[109542] = actions(266);
	v->a[109543] = 1;
	v->a[109544] = aux_sym_number_token2;
	v->a[109545] = actions(270);
	v->a[109546] = 1;
	v->a[109547] = anon_sym_DOLLAR_LPAREN;
	v->a[109548] = actions(282);
	v->a[109549] = 1;
	v->a[109550] = sym_test_operator;
	v->a[109551] = actions(284);
	v->a[109552] = 1;
	v->a[109553] = sym__brace_start;
	v->a[109554] = actions(1075);
	v->a[109555] = 1;
	v->a[109556] = anon_sym_DOLLAR_LBRACK;
	v->a[109557] = actions(1079);
	v->a[109558] = 1;
	v->a[109559] = sym__special_character;
	small_parse_table_5478(v);
}

void	small_parse_table_5478(t_small_parse_table_array *v)
{
	v->a[109560] = actions(1081);
	v->a[109561] = 1;
	v->a[109562] = anon_sym_DQUOTE;
	v->a[109563] = actions(1085);
	v->a[109564] = 1;
	v->a[109565] = anon_sym_DOLLAR_LBRACE;
	v->a[109566] = actions(1087);
	v->a[109567] = 1;
	v->a[109568] = anon_sym_DOLLAR_BQUOTE;
	v->a[109569] = actions(3598);
	v->a[109570] = 1;
	v->a[109571] = anon_sym_BQUOTE;
	v->a[109572] = state(2690);
	v->a[109573] = 1;
	v->a[109574] = aux_sym__literal_repeat1;
	v->a[109575] = state(3111);
	v->a[109576] = 1;
	v->a[109577] = sym__expression;
	v->a[109578] = actions(103);
	v->a[109579] = 2;
	small_parse_table_5479(v);
}

void	small_parse_table_5479(t_small_parse_table_array *v)
{
	v->a[109580] = anon_sym_PLUS_PLUS2;
	v->a[109581] = anon_sym_DASH_DASH2;
	v->a[109582] = actions(105);
	v->a[109583] = 2;
	v->a[109584] = anon_sym_DASH2;
	v->a[109585] = anon_sym_PLUS2;
	v->a[109586] = actions(1073);
	v->a[109587] = 2;
	v->a[109588] = anon_sym_LPAREN_LPAREN;
	v->a[109589] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[109590] = actions(1083);
	v->a[109591] = 2;
	v->a[109592] = sym_raw_string;
	v->a[109593] = sym_ansi_c_string;
	v->a[109594] = actions(1089);
	v->a[109595] = 2;
	v->a[109596] = anon_sym_LT_LPAREN;
	v->a[109597] = anon_sym_GT_LPAREN;
	v->a[109598] = state(3053);
	v->a[109599] = 6;
	small_parse_table_5480(v);
}

/* EOF small_parse_table_1095.c */
