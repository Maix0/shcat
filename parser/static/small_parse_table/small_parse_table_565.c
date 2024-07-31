/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_565.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2825(t_small_parse_table_array *v)
{
	v->a[56500] = actions(1011);
	v->a[56501] = 9;
	v->a[56502] = sym_variable_name;
	v->a[56503] = anon_sym_AMP_AMP;
	v->a[56504] = anon_sym_PIPE_PIPE;
	v->a[56505] = anon_sym_GT_GT;
	v->a[56506] = anon_sym_LT_AMP;
	v->a[56507] = anon_sym_GT_AMP;
	v->a[56508] = anon_sym_GT_PIPE;
	v->a[56509] = anon_sym_LT_GT;
	v->a[56510] = anon_sym_LT_LT_DASH;
	v->a[56511] = 6;
	v->a[56512] = actions(407);
	v->a[56513] = 1;
	v->a[56514] = sym_comment;
	v->a[56515] = actions(2287);
	v->a[56516] = 1;
	v->a[56517] = aux_sym_concatenation_token1;
	v->a[56518] = actions(2289);
	v->a[56519] = 1;
	small_parse_table_2826(v);
}

void	small_parse_table_2826(t_small_parse_table_array *v)
{
	v->a[56520] = sym__concat;
	v->a[56521] = state(1130);
	v->a[56522] = 1;
	v->a[56523] = aux_sym_concatenation_repeat1;
	v->a[56524] = actions(997);
	v->a[56525] = 4;
	v->a[56526] = anon_sym_PIPE;
	v->a[56527] = anon_sym_LT;
	v->a[56528] = anon_sym_GT;
	v->a[56529] = anon_sym_LT_LT;
	v->a[56530] = actions(1001);
	v->a[56531] = 9;
	v->a[56532] = sym_variable_name;
	v->a[56533] = anon_sym_AMP_AMP;
	v->a[56534] = anon_sym_PIPE_PIPE;
	v->a[56535] = anon_sym_GT_GT;
	v->a[56536] = anon_sym_LT_AMP;
	v->a[56537] = anon_sym_GT_AMP;
	v->a[56538] = anon_sym_GT_PIPE;
	v->a[56539] = anon_sym_LT_GT;
	small_parse_table_2827(v);
}

void	small_parse_table_2827(t_small_parse_table_array *v)
{
	v->a[56540] = anon_sym_LT_LT_DASH;
	v->a[56541] = 10;
	v->a[56542] = actions(3);
	v->a[56543] = 1;
	v->a[56544] = sym_comment;
	v->a[56545] = actions(886);
	v->a[56546] = 1;
	v->a[56547] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56548] = actions(888);
	v->a[56549] = 1;
	v->a[56550] = anon_sym_DOLLAR;
	v->a[56551] = actions(890);
	v->a[56552] = 1;
	v->a[56553] = anon_sym_DQUOTE;
	v->a[56554] = actions(892);
	v->a[56555] = 1;
	v->a[56556] = anon_sym_DOLLAR_LBRACE;
	v->a[56557] = actions(894);
	v->a[56558] = 1;
	v->a[56559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2828(v);
}

void	small_parse_table_2828(t_small_parse_table_array *v)
{
	v->a[56560] = actions(896);
	v->a[56561] = 1;
	v->a[56562] = anon_sym_BQUOTE;
	v->a[56563] = state(280);
	v->a[56564] = 2;
	v->a[56565] = sym_concatenation;
	v->a[56566] = aux_sym_for_statement_repeat1;
	v->a[56567] = actions(884);
	v->a[56568] = 3;
	v->a[56569] = sym_raw_string;
	v->a[56570] = sym_number;
	v->a[56571] = sym_word;
	v->a[56572] = state(405);
	v->a[56573] = 5;
	v->a[56574] = sym_arithmetic_expansion;
	v->a[56575] = sym_string;
	v->a[56576] = sym_simple_expansion;
	v->a[56577] = sym_expansion;
	v->a[56578] = sym_command_substitution;
	v->a[56579] = 10;
	small_parse_table_2829(v);
}

void	small_parse_table_2829(t_small_parse_table_array *v)
{
	v->a[56580] = actions(3);
	v->a[56581] = 1;
	v->a[56582] = sym_comment;
	v->a[56583] = actions(803);
	v->a[56584] = 1;
	v->a[56585] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56586] = actions(805);
	v->a[56587] = 1;
	v->a[56588] = anon_sym_DOLLAR;
	v->a[56589] = actions(807);
	v->a[56590] = 1;
	v->a[56591] = anon_sym_DQUOTE;
	v->a[56592] = actions(809);
	v->a[56593] = 1;
	v->a[56594] = anon_sym_DOLLAR_LBRACE;
	v->a[56595] = actions(811);
	v->a[56596] = 1;
	v->a[56597] = anon_sym_DOLLAR_LPAREN;
	v->a[56598] = actions(813);
	v->a[56599] = 1;
	small_parse_table_2830(v);
}

/* EOF small_parse_table_565.c */
