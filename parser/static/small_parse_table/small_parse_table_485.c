/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_485.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2425(t_small_parse_table_array *v)
{
	v->a[48500] = actions(1924);
	v->a[48501] = 3;
	v->a[48502] = anon_sym_LT;
	v->a[48503] = anon_sym_GT;
	v->a[48504] = anon_sym_GT_GT;
	v->a[48505] = state(1040);
	v->a[48506] = 3;
	v->a[48507] = sym_file_redirect;
	v->a[48508] = sym_heredoc_redirect;
	v->a[48509] = aux_sym_redirected_statement_repeat1;
	v->a[48510] = 6;
	v->a[48511] = actions(3);
	v->a[48512] = 1;
	v->a[48513] = sym_comment;
	v->a[48514] = actions(2013);
	v->a[48515] = 1;
	v->a[48516] = sym_string_content;
	v->a[48517] = actions(2017);
	v->a[48518] = 1;
	v->a[48519] = sym_variable_name;
	small_parse_table_2426(v);
}

void	small_parse_table_2426(t_small_parse_table_array *v)
{
	v->a[48520] = actions(2263);
	v->a[48521] = 1;
	v->a[48522] = anon_sym_DQUOTE;
	v->a[48523] = actions(2015);
	v->a[48524] = 2;
	v->a[48525] = aux_sym__simple_variable_name_token1;
	v->a[48526] = aux_sym__multiline_variable_name_token1;
	v->a[48527] = actions(2009);
	v->a[48528] = 8;
	v->a[48529] = anon_sym_BANG;
	v->a[48530] = anon_sym_DASH;
	v->a[48531] = anon_sym_STAR;
	v->a[48532] = anon_sym_QMARK;
	v->a[48533] = anon_sym_DOLLAR;
	v->a[48534] = anon_sym_POUND;
	v->a[48535] = anon_sym_AT;
	v->a[48536] = anon_sym_0;
	v->a[48537] = 6;
	v->a[48538] = actions(3);
	v->a[48539] = 1;
	small_parse_table_2427(v);
}

void	small_parse_table_2427(t_small_parse_table_array *v)
{
	v->a[48540] = sym_comment;
	v->a[48541] = actions(2013);
	v->a[48542] = 1;
	v->a[48543] = sym_string_content;
	v->a[48544] = actions(2017);
	v->a[48545] = 1;
	v->a[48546] = sym_variable_name;
	v->a[48547] = actions(2265);
	v->a[48548] = 1;
	v->a[48549] = anon_sym_DQUOTE;
	v->a[48550] = actions(2015);
	v->a[48551] = 2;
	v->a[48552] = aux_sym__simple_variable_name_token1;
	v->a[48553] = aux_sym__multiline_variable_name_token1;
	v->a[48554] = actions(2009);
	v->a[48555] = 8;
	v->a[48556] = anon_sym_BANG;
	v->a[48557] = anon_sym_DASH;
	v->a[48558] = anon_sym_STAR;
	v->a[48559] = anon_sym_QMARK;
	small_parse_table_2428(v);
}

void	small_parse_table_2428(t_small_parse_table_array *v)
{
	v->a[48560] = anon_sym_DOLLAR;
	v->a[48561] = anon_sym_POUND;
	v->a[48562] = anon_sym_AT;
	v->a[48563] = anon_sym_0;
	v->a[48564] = 6;
	v->a[48565] = actions(3);
	v->a[48566] = 1;
	v->a[48567] = sym_comment;
	v->a[48568] = actions(2013);
	v->a[48569] = 1;
	v->a[48570] = sym_string_content;
	v->a[48571] = actions(2017);
	v->a[48572] = 1;
	v->a[48573] = sym_variable_name;
	v->a[48574] = actions(2267);
	v->a[48575] = 1;
	v->a[48576] = anon_sym_DQUOTE;
	v->a[48577] = actions(2015);
	v->a[48578] = 2;
	v->a[48579] = aux_sym__simple_variable_name_token1;
	small_parse_table_2429(v);
}

void	small_parse_table_2429(t_small_parse_table_array *v)
{
	v->a[48580] = aux_sym__multiline_variable_name_token1;
	v->a[48581] = actions(2009);
	v->a[48582] = 8;
	v->a[48583] = anon_sym_BANG;
	v->a[48584] = anon_sym_DASH;
	v->a[48585] = anon_sym_STAR;
	v->a[48586] = anon_sym_QMARK;
	v->a[48587] = anon_sym_DOLLAR;
	v->a[48588] = anon_sym_POUND;
	v->a[48589] = anon_sym_AT;
	v->a[48590] = anon_sym_0;
	v->a[48591] = 3;
	v->a[48592] = actions(3);
	v->a[48593] = 1;
	v->a[48594] = sym_comment;
	v->a[48595] = actions(2269);
	v->a[48596] = 2;
	v->a[48597] = ts_builtin_sym_end;
	v->a[48598] = aux_sym_heredoc_redirect_token1;
	v->a[48599] = actions(2271);
	small_parse_table_2430(v);
}

/* EOF small_parse_table_485.c */
