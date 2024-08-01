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
	v->a[10501] = anon_sym_DOLLAR_LPAREN;
	v->a[10502] = actions(65);
	v->a[10503] = 1;
	v->a[10504] = anon_sym_BQUOTE;
	v->a[10505] = actions(67);
	v->a[10506] = 1;
	v->a[10507] = sym_variable_name;
	v->a[10508] = actions(204);
	v->a[10509] = 1;
	v->a[10510] = sym_word;
	v->a[10511] = actions(206);
	v->a[10512] = 1;
	v->a[10513] = anon_sym_BANG;
	v->a[10514] = state(116);
	v->a[10515] = 1;
	v->a[10516] = aux_sym__statements_repeat1;
	v->a[10517] = state(179);
	v->a[10518] = 1;
	v->a[10519] = sym_command_name;
	small_parse_table_526(v);
}

void	small_parse_table_526(t_small_parse_table_array *v)
{
	v->a[10520] = state(208);
	v->a[10521] = 1;
	v->a[10522] = sym_variable_assignment;
	v->a[10523] = state(385);
	v->a[10524] = 1;
	v->a[10525] = aux_sym_command_repeat1;
	v->a[10526] = state(555);
	v->a[10527] = 1;
	v->a[10528] = sym_concatenation;
	v->a[10529] = state(599);
	v->a[10530] = 1;
	v->a[10531] = sym_file_redirect;
	v->a[10532] = state(969);
	v->a[10533] = 1;
	v->a[10534] = sym_pipeline;
	v->a[10535] = state(1006);
	v->a[10536] = 1;
	v->a[10537] = aux_sym_redirected_statement_repeat2;
	v->a[10538] = state(1560);
	v->a[10539] = 1;
	small_parse_table_527(v);
}

void	small_parse_table_527(t_small_parse_table_array *v)
{
	v->a[10540] = sym__statement_not_pipeline;
	v->a[10541] = state(1683);
	v->a[10542] = 1;
	v->a[10543] = sym__statements;
	v->a[10544] = actions(11);
	v->a[10545] = 2;
	v->a[10546] = anon_sym_while;
	v->a[10547] = anon_sym_until;
	v->a[10548] = actions(59);
	v->a[10549] = 2;
	v->a[10550] = sym_raw_string;
	v->a[10551] = sym_number;
	v->a[10552] = actions(51);
	v->a[10553] = 3;
	v->a[10554] = anon_sym_LT;
	v->a[10555] = anon_sym_GT;
	v->a[10556] = anon_sym_GT_GT;
	v->a[10557] = state(401);
	v->a[10558] = 5;
	v->a[10559] = sym_arithmetic_expansion;
	small_parse_table_528(v);
}

void	small_parse_table_528(t_small_parse_table_array *v)
{
	v->a[10560] = sym_string;
	v->a[10561] = sym_simple_expansion;
	v->a[10562] = sym_expansion;
	v->a[10563] = sym_command_substitution;
	v->a[10564] = state(820);
	v->a[10565] = 12;
	v->a[10566] = sym_redirected_statement;
	v->a[10567] = sym_for_statement;
	v->a[10568] = sym_while_statement;
	v->a[10569] = sym_if_statement;
	v->a[10570] = sym_case_statement;
	v->a[10571] = sym_function_definition;
	v->a[10572] = sym_compound_statement;
	v->a[10573] = sym_subshell;
	v->a[10574] = sym_list;
	v->a[10575] = sym_negated_command;
	v->a[10576] = sym_command;
	v->a[10577] = sym__variable_assignments;
	v->a[10578] = 30;
	v->a[10579] = actions(3);
	small_parse_table_529(v);
}

void	small_parse_table_529(t_small_parse_table_array *v)
{
	v->a[10580] = 1;
	v->a[10581] = sym_comment;
	v->a[10582] = actions(9);
	v->a[10583] = 1;
	v->a[10584] = anon_sym_for;
	v->a[10585] = actions(13);
	v->a[10586] = 1;
	v->a[10587] = anon_sym_if;
	v->a[10588] = actions(15);
	v->a[10589] = 1;
	v->a[10590] = anon_sym_case;
	v->a[10591] = actions(17);
	v->a[10592] = 1;
	v->a[10593] = anon_sym_LPAREN;
	v->a[10594] = actions(19);
	v->a[10595] = 1;
	v->a[10596] = anon_sym_LBRACE;
	v->a[10597] = actions(53);
	v->a[10598] = 1;
	v->a[10599] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_530(v);
}

/* EOF small_parse_table_105.c */
