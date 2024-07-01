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
	v->a[10500] = actions(217);
	v->a[10501] = 2;
	v->a[10502] = sym_raw_string;
	v->a[10503] = sym_number;
	v->a[10504] = state(362);
	v->a[10505] = 5;
	v->a[10506] = sym_arithmetic_expansion;
	v->a[10507] = sym_string;
	v->a[10508] = sym_simple_expansion;
	v->a[10509] = sym_expansion;
	v->a[10510] = sym_command_substitution;
	v->a[10511] = actions(215);
	v->a[10512] = 7;
	v->a[10513] = anon_sym_LT;
	v->a[10514] = anon_sym_GT;
	v->a[10515] = anon_sym_GT_GT;
	v->a[10516] = anon_sym_LT_AMP;
	v->a[10517] = anon_sym_GT_AMP;
	v->a[10518] = anon_sym_GT_PIPE;
	v->a[10519] = anon_sym_LT_GT;
	small_parse_table_526(v);
}

void	small_parse_table_526(t_small_parse_table_array *v)
{
	v->a[10520] = state(1003);
	v->a[10521] = 12;
	v->a[10522] = sym_redirected_statement;
	v->a[10523] = sym_for_statement;
	v->a[10524] = sym_while_statement;
	v->a[10525] = sym_if_statement;
	v->a[10526] = sym_case_statement;
	v->a[10527] = sym_function_definition;
	v->a[10528] = sym_compound_statement;
	v->a[10529] = sym_subshell;
	v->a[10530] = sym_list;
	v->a[10531] = sym_negated_command;
	v->a[10532] = sym_command;
	v->a[10533] = sym__variable_assignments;
	v->a[10534] = 31;
	v->a[10535] = actions(3);
	v->a[10536] = 1;
	v->a[10537] = sym_comment;
	v->a[10538] = actions(9);
	v->a[10539] = 1;
	small_parse_table_527(v);
}

void	small_parse_table_527(t_small_parse_table_array *v)
{
	v->a[10540] = anon_sym_for;
	v->a[10541] = actions(13);
	v->a[10542] = 1;
	v->a[10543] = anon_sym_if;
	v->a[10544] = actions(15);
	v->a[10545] = 1;
	v->a[10546] = anon_sym_case;
	v->a[10547] = actions(17);
	v->a[10548] = 1;
	v->a[10549] = anon_sym_LPAREN;
	v->a[10550] = actions(19);
	v->a[10551] = 1;
	v->a[10552] = anon_sym_LBRACE;
	v->a[10553] = actions(55);
	v->a[10554] = 1;
	v->a[10555] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10556] = actions(57);
	v->a[10557] = 1;
	v->a[10558] = anon_sym_DOLLAR;
	v->a[10559] = actions(59);
	small_parse_table_528(v);
}

void	small_parse_table_528(t_small_parse_table_array *v)
{
	v->a[10560] = 1;
	v->a[10561] = anon_sym_DQUOTE;
	v->a[10562] = actions(63);
	v->a[10563] = 1;
	v->a[10564] = anon_sym_DOLLAR_LBRACE;
	v->a[10565] = actions(65);
	v->a[10566] = 1;
	v->a[10567] = anon_sym_DOLLAR_LPAREN;
	v->a[10568] = actions(67);
	v->a[10569] = 1;
	v->a[10570] = anon_sym_BQUOTE;
	v->a[10571] = actions(69);
	v->a[10572] = 1;
	v->a[10573] = sym_file_descriptor;
	v->a[10574] = actions(71);
	v->a[10575] = 1;
	v->a[10576] = sym_variable_name;
	v->a[10577] = actions(229);
	v->a[10578] = 1;
	v->a[10579] = sym_word;
	small_parse_table_529(v);
}

void	small_parse_table_529(t_small_parse_table_array *v)
{
	v->a[10580] = actions(231);
	v->a[10581] = 1;
	v->a[10582] = anon_sym_BANG;
	v->a[10583] = state(122);
	v->a[10584] = 1;
	v->a[10585] = aux_sym__statements_repeat1;
	v->a[10586] = state(179);
	v->a[10587] = 1;
	v->a[10588] = sym_command_name;
	v->a[10589] = state(302);
	v->a[10590] = 1;
	v->a[10591] = sym_variable_assignment;
	v->a[10592] = state(603);
	v->a[10593] = 1;
	v->a[10594] = sym_concatenation;
	v->a[10595] = state(658);
	v->a[10596] = 1;
	v->a[10597] = aux_sym_command_repeat1;
	v->a[10598] = state(764);
	v->a[10599] = 1;
	small_parse_table_530(v);
}

/* EOF small_parse_table_105.c */
