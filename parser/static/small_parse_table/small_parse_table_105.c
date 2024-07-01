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
	v->a[10500] = 1;
	v->a[10501] = aux_sym_command_repeat1;
	v->a[10502] = state(733);
	v->a[10503] = 1;
	v->a[10504] = sym_file_redirect;
	v->a[10505] = state(1095);
	v->a[10506] = 1;
	v->a[10507] = sym_pipeline;
	v->a[10508] = state(1282);
	v->a[10509] = 1;
	v->a[10510] = aux_sym_redirected_statement_repeat2;
	v->a[10511] = state(2127);
	v->a[10512] = 1;
	v->a[10513] = sym__statement_not_pipeline;
	v->a[10514] = state(2265);
	v->a[10515] = 1;
	v->a[10516] = sym__statements;
	v->a[10517] = actions(11);
	v->a[10518] = 2;
	v->a[10519] = anon_sym_while;
	small_parse_table_526(v);
}

void	small_parse_table_526(t_small_parse_table_array *v)
{
	v->a[10520] = anon_sym_until;
	v->a[10521] = actions(226);
	v->a[10522] = 2;
	v->a[10523] = anon_sym_LT_AMP_DASH;
	v->a[10524] = anon_sym_GT_AMP_DASH;
	v->a[10525] = actions(228);
	v->a[10526] = 2;
	v->a[10527] = sym_raw_string;
	v->a[10528] = sym_number;
	v->a[10529] = state(382);
	v->a[10530] = 5;
	v->a[10531] = sym_arithmetic_expansion;
	v->a[10532] = sym_string;
	v->a[10533] = sym_simple_expansion;
	v->a[10534] = sym_expansion;
	v->a[10535] = sym_command_substitution;
	v->a[10536] = actions(224);
	v->a[10537] = 6;
	v->a[10538] = anon_sym_LT;
	v->a[10539] = anon_sym_GT;
	small_parse_table_527(v);
}

void	small_parse_table_527(t_small_parse_table_array *v)
{
	v->a[10540] = anon_sym_GT_GT;
	v->a[10541] = anon_sym_LT_AMP;
	v->a[10542] = anon_sym_GT_AMP;
	v->a[10543] = anon_sym_GT_PIPE;
	v->a[10544] = state(1087);
	v->a[10545] = 12;
	v->a[10546] = sym_redirected_statement;
	v->a[10547] = sym_for_statement;
	v->a[10548] = sym_while_statement;
	v->a[10549] = sym_if_statement;
	v->a[10550] = sym_case_statement;
	v->a[10551] = sym_function_definition;
	v->a[10552] = sym_compound_statement;
	v->a[10553] = sym_subshell;
	v->a[10554] = sym_list;
	v->a[10555] = sym_negated_command;
	v->a[10556] = sym_command;
	v->a[10557] = sym__variable_assignments;
	v->a[10558] = 32;
	v->a[10559] = actions(3);
	small_parse_table_528(v);
}

void	small_parse_table_528(t_small_parse_table_array *v)
{
	v->a[10560] = 1;
	v->a[10561] = sym_comment;
	v->a[10562] = actions(9);
	v->a[10563] = 1;
	v->a[10564] = anon_sym_for;
	v->a[10565] = actions(13);
	v->a[10566] = 1;
	v->a[10567] = anon_sym_if;
	v->a[10568] = actions(15);
	v->a[10569] = 1;
	v->a[10570] = anon_sym_case;
	v->a[10571] = actions(17);
	v->a[10572] = 1;
	v->a[10573] = anon_sym_LPAREN;
	v->a[10574] = actions(19);
	v->a[10575] = 1;
	v->a[10576] = anon_sym_LBRACE;
	v->a[10577] = actions(59);
	v->a[10578] = 1;
	v->a[10579] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_529(v);
}

void	small_parse_table_529(t_small_parse_table_array *v)
{
	v->a[10580] = actions(61);
	v->a[10581] = 1;
	v->a[10582] = anon_sym_DOLLAR;
	v->a[10583] = actions(63);
	v->a[10584] = 1;
	v->a[10585] = anon_sym_DQUOTE;
	v->a[10586] = actions(67);
	v->a[10587] = 1;
	v->a[10588] = anon_sym_DOLLAR_LBRACE;
	v->a[10589] = actions(69);
	v->a[10590] = 1;
	v->a[10591] = anon_sym_DOLLAR_LPAREN;
	v->a[10592] = actions(71);
	v->a[10593] = 1;
	v->a[10594] = anon_sym_BQUOTE;
	v->a[10595] = actions(220);
	v->a[10596] = 1;
	v->a[10597] = sym_word;
	v->a[10598] = actions(222);
	v->a[10599] = 1;
	small_parse_table_530(v);
}

/* EOF small_parse_table_105.c */
