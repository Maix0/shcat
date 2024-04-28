/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3000.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15000(t_small_parse_table_array *v)
{
	v->a[300000] = state(6127);
	v->a[300001] = 4;
	v->a[300002] = sym_arithmetic_expansion;
	v->a[300003] = sym_simple_expansion;
	v->a[300004] = sym_expansion;
	v->a[300005] = sym_command_substitution;
	v->a[300006] = 12;
	v->a[300007] = actions(3);
	v->a[300008] = 1;
	v->a[300009] = sym_comment;
	v->a[300010] = actions(13060);
	v->a[300011] = 1;
	v->a[300012] = anon_sym_DOLLAR_LBRACK;
	v->a[300013] = actions(13066);
	v->a[300014] = 1;
	v->a[300015] = sym_string_content;
	v->a[300016] = actions(13068);
	v->a[300017] = 1;
	v->a[300018] = anon_sym_DOLLAR_LBRACE;
	v->a[300019] = actions(13070);
	small_parse_table_15001(v);
}

void	small_parse_table_15001(t_small_parse_table_array *v)
{
	v->a[300020] = 1;
	v->a[300021] = anon_sym_DOLLAR_LPAREN;
	v->a[300022] = actions(13072);
	v->a[300023] = 1;
	v->a[300024] = anon_sym_BQUOTE;
	v->a[300025] = actions(13074);
	v->a[300026] = 1;
	v->a[300027] = anon_sym_DOLLAR_BQUOTE;
	v->a[300028] = actions(13658);
	v->a[300029] = 1;
	v->a[300030] = anon_sym_DOLLAR;
	v->a[300031] = actions(13660);
	v->a[300032] = 1;
	v->a[300033] = anon_sym_DQUOTE;
	v->a[300034] = state(5768);
	v->a[300035] = 1;
	v->a[300036] = aux_sym_string_repeat1;
	v->a[300037] = actions(13058);
	v->a[300038] = 2;
	v->a[300039] = anon_sym_LPAREN_LPAREN;
	small_parse_table_15002(v);
}

void	small_parse_table_15002(t_small_parse_table_array *v)
{
	v->a[300040] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300041] = state(6127);
	v->a[300042] = 4;
	v->a[300043] = sym_arithmetic_expansion;
	v->a[300044] = sym_simple_expansion;
	v->a[300045] = sym_expansion;
	v->a[300046] = sym_command_substitution;
	v->a[300047] = 12;
	v->a[300048] = actions(3);
	v->a[300049] = 1;
	v->a[300050] = sym_comment;
	v->a[300051] = actions(13060);
	v->a[300052] = 1;
	v->a[300053] = anon_sym_DOLLAR_LBRACK;
	v->a[300054] = actions(13066);
	v->a[300055] = 1;
	v->a[300056] = sym_string_content;
	v->a[300057] = actions(13068);
	v->a[300058] = 1;
	v->a[300059] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_15003(v);
}

void	small_parse_table_15003(t_small_parse_table_array *v)
{
	v->a[300060] = actions(13070);
	v->a[300061] = 1;
	v->a[300062] = anon_sym_DOLLAR_LPAREN;
	v->a[300063] = actions(13072);
	v->a[300064] = 1;
	v->a[300065] = anon_sym_BQUOTE;
	v->a[300066] = actions(13074);
	v->a[300067] = 1;
	v->a[300068] = anon_sym_DOLLAR_BQUOTE;
	v->a[300069] = actions(13662);
	v->a[300070] = 1;
	v->a[300071] = anon_sym_DOLLAR;
	v->a[300072] = actions(13664);
	v->a[300073] = 1;
	v->a[300074] = anon_sym_DQUOTE;
	v->a[300075] = state(5768);
	v->a[300076] = 1;
	v->a[300077] = aux_sym_string_repeat1;
	v->a[300078] = actions(13058);
	v->a[300079] = 2;
	small_parse_table_15004(v);
}

void	small_parse_table_15004(t_small_parse_table_array *v)
{
	v->a[300080] = anon_sym_LPAREN_LPAREN;
	v->a[300081] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[300082] = state(6127);
	v->a[300083] = 4;
	v->a[300084] = sym_arithmetic_expansion;
	v->a[300085] = sym_simple_expansion;
	v->a[300086] = sym_expansion;
	v->a[300087] = sym_command_substitution;
	v->a[300088] = 12;
	v->a[300089] = actions(3);
	v->a[300090] = 1;
	v->a[300091] = sym_comment;
	v->a[300092] = actions(13060);
	v->a[300093] = 1;
	v->a[300094] = anon_sym_DOLLAR_LBRACK;
	v->a[300095] = actions(13066);
	v->a[300096] = 1;
	v->a[300097] = sym_string_content;
	v->a[300098] = actions(13068);
	v->a[300099] = 1;
	small_parse_table_15005(v);
}

/* EOF small_parse_table_3000.c */
