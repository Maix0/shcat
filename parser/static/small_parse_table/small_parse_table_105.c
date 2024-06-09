/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_105.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_525(t_small_parse_table_array *v)
{
	v->a[10500] = actions(65);
	v->a[10501] = 1;
	v->a[10502] = anon_sym_DOLLAR;
	v->a[10503] = actions(67);
	v->a[10504] = 1;
	v->a[10505] = anon_sym_DQUOTE;
	v->a[10506] = actions(69);
	v->a[10507] = 1;
	v->a[10508] = sym_raw_string;
	v->a[10509] = actions(71);
	v->a[10510] = 1;
	v->a[10511] = aux_sym_number_token1;
	v->a[10512] = actions(73);
	v->a[10513] = 1;
	v->a[10514] = aux_sym_number_token2;
	v->a[10515] = actions(75);
	v->a[10516] = 1;
	v->a[10517] = anon_sym_DOLLAR_LBRACE;
	v->a[10518] = actions(77);
	v->a[10519] = 1;
	small_parse_table_526(v);
}

void	small_parse_table_526(t_small_parse_table_array *v)
{
	v->a[10520] = anon_sym_DOLLAR_LPAREN;
	v->a[10521] = actions(79);
	v->a[10522] = 1;
	v->a[10523] = anon_sym_BQUOTE;
	v->a[10524] = actions(81);
	v->a[10525] = 1;
	v->a[10526] = sym_file_descriptor;
	v->a[10527] = actions(83);
	v->a[10528] = 1;
	v->a[10529] = sym_variable_name;
	v->a[10530] = actions(238);
	v->a[10531] = 1;
	v->a[10532] = sym_word;
	v->a[10533] = actions(240);
	v->a[10534] = 1;
	v->a[10535] = anon_sym_BANG;
	v->a[10536] = state(132);
	v->a[10537] = 1;
	v->a[10538] = aux_sym__statements_repeat1;
	v->a[10539] = state(185);
	small_parse_table_527(v);
}

void	small_parse_table_527(t_small_parse_table_array *v)
{
	v->a[10540] = 1;
	v->a[10541] = sym_command_name;
	v->a[10542] = state(297);
	v->a[10543] = 1;
	v->a[10544] = sym_variable_assignment;
	v->a[10545] = state(582);
	v->a[10546] = 1;
	v->a[10547] = sym_concatenation;
	v->a[10548] = state(614);
	v->a[10549] = 1;
	v->a[10550] = aux_sym_command_repeat1;
	v->a[10551] = state(769);
	v->a[10552] = 1;
	v->a[10553] = sym_file_redirect;
	v->a[10554] = state(1133);
	v->a[10555] = 1;
	v->a[10556] = aux_sym_redirected_statement_repeat2;
	v->a[10557] = state(1142);
	v->a[10558] = 1;
	v->a[10559] = sym_pipeline;
	small_parse_table_528(v);
}

void	small_parse_table_528(t_small_parse_table_array *v)
{
	v->a[10560] = state(2041);
	v->a[10561] = 1;
	v->a[10562] = sym__statement_not_pipeline;
	v->a[10563] = state(2236);
	v->a[10564] = 1;
	v->a[10565] = sym__statements;
	v->a[10566] = actions(11);
	v->a[10567] = 2;
	v->a[10568] = anon_sym_while;
	v->a[10569] = anon_sym_until;
	v->a[10570] = actions(61);
	v->a[10571] = 2;
	v->a[10572] = anon_sym_LT_AMP_DASH;
	v->a[10573] = anon_sym_GT_AMP_DASH;
	v->a[10574] = state(397);
	v->a[10575] = 6;
	v->a[10576] = sym_arithmetic_expansion;
	v->a[10577] = sym_string;
	v->a[10578] = sym_number;
	v->a[10579] = sym_simple_expansion;
	small_parse_table_529(v);
}

void	small_parse_table_529(t_small_parse_table_array *v)
{
	v->a[10580] = sym_expansion;
	v->a[10581] = sym_command_substitution;
	v->a[10582] = actions(59);
	v->a[10583] = 8;
	v->a[10584] = anon_sym_LT;
	v->a[10585] = anon_sym_GT;
	v->a[10586] = anon_sym_GT_GT;
	v->a[10587] = anon_sym_AMP_GT;
	v->a[10588] = anon_sym_AMP_GT_GT;
	v->a[10589] = anon_sym_LT_AMP;
	v->a[10590] = anon_sym_GT_AMP;
	v->a[10591] = anon_sym_GT_PIPE;
	v->a[10592] = state(1071);
	v->a[10593] = 12;
	v->a[10594] = sym_redirected_statement;
	v->a[10595] = sym_for_statement;
	v->a[10596] = sym_while_statement;
	v->a[10597] = sym_if_statement;
	v->a[10598] = sym_case_statement;
	v->a[10599] = sym_function_definition;
	small_parse_table_530(v);
}

/* EOF small_parse_table_105.c */
