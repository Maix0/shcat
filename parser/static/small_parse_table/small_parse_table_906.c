/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_906.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4530(t_small_parse_table_array *v)
{
	v->a[90600] = sym_comment;
	v->a[90601] = actions(3994);
	v->a[90602] = 2;
	v->a[90603] = sym_regex;
	v->a[90604] = aux_sym_expansion_regex_token1;
	v->a[90605] = actions(3992);
	v->a[90606] = 4;
	v->a[90607] = anon_sym_RPAREN;
	v->a[90608] = anon_sym_RBRACE;
	v->a[90609] = anon_sym_DQUOTE;
	v->a[90610] = sym_raw_string;
	v->a[90611] = 3;
	v->a[90612] = actions(870);
	v->a[90613] = 1;
	v->a[90614] = sym_comment;
	v->a[90615] = actions(1039);
	v->a[90616] = 1;
	v->a[90617] = anon_sym_DOLLAR;
	v->a[90618] = actions(1041);
	v->a[90619] = 5;
	small_parse_table_4531(v);
}

void	small_parse_table_4531(t_small_parse_table_array *v)
{
	v->a[90620] = sym_heredoc_content;
	v->a[90621] = sym_heredoc_end;
	v->a[90622] = anon_sym_DOLLAR_LBRACE;
	v->a[90623] = anon_sym_DOLLAR_LPAREN;
	v->a[90624] = anon_sym_BQUOTE;
	v->a[90625] = 6;
	v->a[90626] = actions(870);
	v->a[90627] = 1;
	v->a[90628] = sym_comment;
	v->a[90629] = actions(3984);
	v->a[90630] = 1;
	v->a[90631] = anon_sym_PIPE;
	v->a[90632] = actions(3996);
	v->a[90633] = 1;
	v->a[90634] = anon_sym_RPAREN;
	v->a[90635] = state(2050);
	v->a[90636] = 1;
	v->a[90637] = aux_sym_concatenation_repeat1;
	v->a[90638] = state(2076);
	v->a[90639] = 1;
	small_parse_table_4532(v);
}

void	small_parse_table_4532(t_small_parse_table_array *v)
{
	v->a[90640] = aux_sym__case_item_last_repeat1;
	v->a[90641] = actions(3988);
	v->a[90642] = 2;
	v->a[90643] = sym__concat;
	v->a[90644] = aux_sym_concatenation_token1;
	v->a[90645] = 5;
	v->a[90646] = actions(3);
	v->a[90647] = 1;
	v->a[90648] = sym_comment;
	v->a[90649] = actions(3859);
	v->a[90650] = 1;
	v->a[90651] = aux_sym_heredoc_redirect_token1;
	v->a[90652] = actions(3998);
	v->a[90653] = 1;
	v->a[90654] = anon_sym_in;
	v->a[90655] = state(2125);
	v->a[90656] = 1;
	v->a[90657] = sym_terminator;
	v->a[90658] = actions(2262);
	v->a[90659] = 3;
	small_parse_table_4533(v);
}

void	small_parse_table_4533(t_small_parse_table_array *v)
{
	v->a[90660] = anon_sym_SEMI_SEMI;
	v->a[90661] = anon_sym_AMP;
	v->a[90662] = anon_sym_SEMI;
	v->a[90663] = 6;
	v->a[90664] = actions(870);
	v->a[90665] = 1;
	v->a[90666] = sym_comment;
	v->a[90667] = actions(3980);
	v->a[90668] = 1;
	v->a[90669] = anon_sym_elif;
	v->a[90670] = actions(3982);
	v->a[90671] = 1;
	v->a[90672] = anon_sym_else;
	v->a[90673] = actions(4000);
	v->a[90674] = 1;
	v->a[90675] = anon_sym_fi;
	v->a[90676] = state(2236);
	v->a[90677] = 1;
	v->a[90678] = sym_else_clause;
	v->a[90679] = state(2052);
	small_parse_table_4534(v);
}

void	small_parse_table_4534(t_small_parse_table_array *v)
{
	v->a[90680] = 2;
	v->a[90681] = sym_elif_clause;
	v->a[90682] = aux_sym_if_statement_repeat1;
	v->a[90683] = 6;
	v->a[90684] = actions(870);
	v->a[90685] = 1;
	v->a[90686] = sym_comment;
	v->a[90687] = actions(3984);
	v->a[90688] = 1;
	v->a[90689] = anon_sym_PIPE;
	v->a[90690] = actions(4002);
	v->a[90691] = 1;
	v->a[90692] = anon_sym_RPAREN;
	v->a[90693] = state(2050);
	v->a[90694] = 1;
	v->a[90695] = aux_sym_concatenation_repeat1;
	v->a[90696] = state(2083);
	v->a[90697] = 1;
	v->a[90698] = aux_sym__case_item_last_repeat1;
	v->a[90699] = actions(3988);
	small_parse_table_4535(v);
}

/* EOF small_parse_table_906.c */
