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
	v->a[10501] = sym_comment;
	v->a[10502] = actions(9);
	v->a[10503] = 1;
	v->a[10504] = anon_sym_for;
	v->a[10505] = actions(13);
	v->a[10506] = 1;
	v->a[10507] = anon_sym_if;
	v->a[10508] = actions(15);
	v->a[10509] = 1;
	v->a[10510] = anon_sym_case;
	v->a[10511] = actions(17);
	v->a[10512] = 1;
	v->a[10513] = anon_sym_LPAREN;
	v->a[10514] = actions(19);
	v->a[10515] = 1;
	v->a[10516] = anon_sym_LBRACE;
	v->a[10517] = actions(41);
	v->a[10518] = 1;
	v->a[10519] = sym_word;
	small_parse_table_526(v);
}

void	small_parse_table_526(t_small_parse_table_array *v)
{
	v->a[10520] = actions(49);
	v->a[10521] = 1;
	v->a[10522] = anon_sym_BANG;
	v->a[10523] = actions(53);
	v->a[10524] = 1;
	v->a[10525] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10526] = actions(55);
	v->a[10527] = 1;
	v->a[10528] = anon_sym_DOLLAR;
	v->a[10529] = actions(57);
	v->a[10530] = 1;
	v->a[10531] = anon_sym_DQUOTE;
	v->a[10532] = actions(61);
	v->a[10533] = 1;
	v->a[10534] = anon_sym_DOLLAR_LBRACE;
	v->a[10535] = actions(63);
	v->a[10536] = 1;
	v->a[10537] = anon_sym_DOLLAR_LPAREN;
	v->a[10538] = actions(65);
	v->a[10539] = 1;
	small_parse_table_527(v);
}

void	small_parse_table_527(t_small_parse_table_array *v)
{
	v->a[10540] = anon_sym_BQUOTE;
	v->a[10541] = actions(67);
	v->a[10542] = 1;
	v->a[10543] = sym_variable_name;
	v->a[10544] = actions(240);
	v->a[10545] = 1;
	v->a[10546] = anon_sym_done;
	v->a[10547] = state(60);
	v->a[10548] = 1;
	v->a[10549] = aux_sym__terminated_statement;
	v->a[10550] = state(271);
	v->a[10551] = 1;
	v->a[10552] = sym_command_name;
	v->a[10553] = state(298);
	v->a[10554] = 1;
	v->a[10555] = sym_variable_assignment;
	v->a[10556] = state(482);
	v->a[10557] = 1;
	v->a[10558] = aux_sym_command_repeat1;
	v->a[10559] = state(600);
	small_parse_table_528(v);
}

void	small_parse_table_528(t_small_parse_table_array *v)
{
	v->a[10560] = 1;
	v->a[10561] = sym_file_redirect;
	v->a[10562] = state(602);
	v->a[10563] = 1;
	v->a[10564] = sym_concatenation;
	v->a[10565] = state(1012);
	v->a[10566] = 1;
	v->a[10567] = sym_pipeline;
	v->a[10568] = state(1068);
	v->a[10569] = 1;
	v->a[10570] = aux_sym_redirected_statement_repeat2;
	v->a[10571] = state(1609);
	v->a[10572] = 1;
	v->a[10573] = sym__statement_not_pipeline;
	v->a[10574] = actions(11);
	v->a[10575] = 2;
	v->a[10576] = anon_sym_while;
	v->a[10577] = anon_sym_until;
	v->a[10578] = actions(59);
	v->a[10579] = 2;
	small_parse_table_529(v);
}

void	small_parse_table_529(t_small_parse_table_array *v)
{
	v->a[10580] = sym_raw_string;
	v->a[10581] = sym_number;
	v->a[10582] = state(425);
	v->a[10583] = 5;
	v->a[10584] = sym_arithmetic_expansion;
	v->a[10585] = sym_string;
	v->a[10586] = sym_simple_expansion;
	v->a[10587] = sym_expansion;
	v->a[10588] = sym_command_substitution;
	v->a[10589] = actions(51);
	v->a[10590] = 7;
	v->a[10591] = anon_sym_LT;
	v->a[10592] = anon_sym_GT;
	v->a[10593] = anon_sym_GT_GT;
	v->a[10594] = anon_sym_LT_AMP;
	v->a[10595] = anon_sym_GT_AMP;
	v->a[10596] = anon_sym_GT_PIPE;
	v->a[10597] = anon_sym_LT_GT;
	v->a[10598] = state(933);
	v->a[10599] = 12;
	small_parse_table_530(v);
}

/* EOF small_parse_table_105.c */
