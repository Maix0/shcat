/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_600.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3000(t_small_parse_table_array *v)
{
	v->a[60000] = sym_string_content;
	v->a[60001] = actions(2435);
	v->a[60002] = 1;
	v->a[60003] = sym_variable_name;
	v->a[60004] = actions(2447);
	v->a[60005] = 1;
	v->a[60006] = anon_sym_DQUOTE;
	v->a[60007] = actions(2433);
	v->a[60008] = 2;
	v->a[60009] = aux_sym__simple_variable_name_token1;
	v->a[60010] = aux_sym__multiline_variable_name_token1;
	v->a[60011] = actions(2427);
	v->a[60012] = 8;
	v->a[60013] = anon_sym_BANG;
	v->a[60014] = anon_sym_DASH;
	v->a[60015] = anon_sym_STAR;
	v->a[60016] = anon_sym_QMARK;
	v->a[60017] = anon_sym_DOLLAR;
	v->a[60018] = anon_sym_POUND;
	v->a[60019] = anon_sym_AT;
	small_parse_table_3001(v);
}

void	small_parse_table_3001(t_small_parse_table_array *v)
{
	v->a[60020] = anon_sym_0;
	v->a[60021] = 6;
	v->a[60022] = actions(3);
	v->a[60023] = 1;
	v->a[60024] = sym_comment;
	v->a[60025] = actions(2431);
	v->a[60026] = 1;
	v->a[60027] = sym_string_content;
	v->a[60028] = actions(2435);
	v->a[60029] = 1;
	v->a[60030] = sym_variable_name;
	v->a[60031] = actions(2449);
	v->a[60032] = 1;
	v->a[60033] = anon_sym_DQUOTE;
	v->a[60034] = actions(2433);
	v->a[60035] = 2;
	v->a[60036] = aux_sym__simple_variable_name_token1;
	v->a[60037] = aux_sym__multiline_variable_name_token1;
	v->a[60038] = actions(2427);
	v->a[60039] = 8;
	small_parse_table_3002(v);
}

void	small_parse_table_3002(t_small_parse_table_array *v)
{
	v->a[60040] = anon_sym_BANG;
	v->a[60041] = anon_sym_DASH;
	v->a[60042] = anon_sym_STAR;
	v->a[60043] = anon_sym_QMARK;
	v->a[60044] = anon_sym_DOLLAR;
	v->a[60045] = anon_sym_POUND;
	v->a[60046] = anon_sym_AT;
	v->a[60047] = anon_sym_0;
	v->a[60048] = 5;
	v->a[60049] = actions(3);
	v->a[60050] = 1;
	v->a[60051] = sym_comment;
	v->a[60052] = actions(1577);
	v->a[60053] = 1;
	v->a[60054] = aux_sym_concatenation_token1;
	v->a[60055] = actions(2451);
	v->a[60056] = 1;
	v->a[60057] = sym__concat;
	v->a[60058] = state(656);
	v->a[60059] = 1;
	small_parse_table_3003(v);
}

void	small_parse_table_3003(t_small_parse_table_array *v)
{
	v->a[60060] = aux_sym_concatenation_repeat1;
	v->a[60061] = actions(997);
	v->a[60062] = 10;
	v->a[60063] = aux_sym_heredoc_redirect_token1;
	v->a[60064] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60065] = anon_sym_DOLLAR;
	v->a[60066] = anon_sym_DQUOTE;
	v->a[60067] = sym_raw_string;
	v->a[60068] = sym_number;
	v->a[60069] = anon_sym_DOLLAR_LBRACE;
	v->a[60070] = anon_sym_DOLLAR_LPAREN;
	v->a[60071] = anon_sym_BQUOTE;
	v->a[60072] = sym_word;
	v->a[60073] = 6;
	v->a[60074] = actions(3);
	v->a[60075] = 1;
	v->a[60076] = sym_comment;
	v->a[60077] = actions(2431);
	v->a[60078] = 1;
	v->a[60079] = sym_string_content;
	small_parse_table_3004(v);
}

void	small_parse_table_3004(t_small_parse_table_array *v)
{
	v->a[60080] = actions(2435);
	v->a[60081] = 1;
	v->a[60082] = sym_variable_name;
	v->a[60083] = actions(2453);
	v->a[60084] = 1;
	v->a[60085] = anon_sym_DQUOTE;
	v->a[60086] = actions(2433);
	v->a[60087] = 2;
	v->a[60088] = aux_sym__simple_variable_name_token1;
	v->a[60089] = aux_sym__multiline_variable_name_token1;
	v->a[60090] = actions(2427);
	v->a[60091] = 8;
	v->a[60092] = anon_sym_BANG;
	v->a[60093] = anon_sym_DASH;
	v->a[60094] = anon_sym_STAR;
	v->a[60095] = anon_sym_QMARK;
	v->a[60096] = anon_sym_DOLLAR;
	v->a[60097] = anon_sym_POUND;
	v->a[60098] = anon_sym_AT;
	v->a[60099] = anon_sym_0;
	small_parse_table_3005(v);
}

/* EOF small_parse_table_600.c */
