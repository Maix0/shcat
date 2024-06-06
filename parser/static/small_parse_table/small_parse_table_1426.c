/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1426.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7130(t_small_parse_table_array *v)
{
	v->a[142600] = actions(5497);
	v->a[142601] = 1;
	v->a[142602] = anon_sym_DOLLAR_LBRACE;
	v->a[142603] = actions(5501);
	v->a[142604] = 1;
	v->a[142605] = anon_sym_BQUOTE;
	v->a[142606] = actions(5503);
	v->a[142607] = 1;
	v->a[142608] = anon_sym_DOLLAR_BQUOTE;
	v->a[142609] = actions(8529);
	v->a[142610] = 1;
	v->a[142611] = anon_sym_DOLLAR_LPAREN;
	v->a[142612] = state(1868);
	v->a[142613] = 2;
	v->a[142614] = sym_expansion;
	v->a[142615] = sym_command_substitution;
	v->a[142616] = 5;
	v->a[142617] = actions(17);
	v->a[142618] = 1;
	v->a[142619] = anon_sym_LPAREN;
	small_parse_table_7131(v);
}

void	small_parse_table_7131(t_small_parse_table_array *v)
{
	v->a[142620] = actions(21);
	v->a[142621] = 1;
	v->a[142622] = anon_sym_LBRACE;
	v->a[142623] = actions(57);
	v->a[142624] = 1;
	v->a[142625] = sym_comment;
	v->a[142626] = actions(8521);
	v->a[142627] = 1;
	v->a[142628] = anon_sym_if;
	v->a[142629] = state(2363);
	v->a[142630] = 3;
	v->a[142631] = sym_if_statement;
	v->a[142632] = sym_compound_statement;
	v->a[142633] = sym_subshell;
	v->a[142634] = 6;
	v->a[142635] = actions(57);
	v->a[142636] = 1;
	v->a[142637] = sym_comment;
	v->a[142638] = actions(8495);
	v->a[142639] = 1;
	small_parse_table_7132(v);
}

void	small_parse_table_7132(t_small_parse_table_array *v)
{
	v->a[142640] = anon_sym_elif;
	v->a[142641] = actions(8497);
	v->a[142642] = 1;
	v->a[142643] = anon_sym_else;
	v->a[142644] = actions(8531);
	v->a[142645] = 1;
	v->a[142646] = anon_sym_fi;
	v->a[142647] = state(3853);
	v->a[142648] = 1;
	v->a[142649] = sym_else_clause;
	v->a[142650] = state(3412);
	v->a[142651] = 2;
	v->a[142652] = sym_elif_clause;
	v->a[142653] = aux_sym_if_statement_repeat1;
	v->a[142654] = 3;
	v->a[142655] = actions(3);
	v->a[142656] = 1;
	v->a[142657] = sym_comment;
	v->a[142658] = actions(3034);
	v->a[142659] = 2;
	small_parse_table_7133(v);
}

void	small_parse_table_7133(t_small_parse_table_array *v)
{
	v->a[142660] = sym_regex;
	v->a[142661] = aux_sym__expansion_regex_token1;
	v->a[142662] = actions(3032);
	v->a[142663] = 4;
	v->a[142664] = anon_sym_RPAREN;
	v->a[142665] = anon_sym_DQUOTE;
	v->a[142666] = sym_raw_string;
	v->a[142667] = anon_sym_RBRACE3;
	v->a[142668] = 3;
	v->a[142669] = actions(3);
	v->a[142670] = 1;
	v->a[142671] = sym_comment;
	v->a[142672] = actions(8535);
	v->a[142673] = 2;
	v->a[142674] = sym_regex;
	v->a[142675] = aux_sym__expansion_regex_token1;
	v->a[142676] = actions(8533);
	v->a[142677] = 4;
	v->a[142678] = anon_sym_RPAREN;
	v->a[142679] = anon_sym_DQUOTE;
	small_parse_table_7134(v);
}

void	small_parse_table_7134(t_small_parse_table_array *v)
{
	v->a[142680] = sym_raw_string;
	v->a[142681] = anon_sym_RBRACE3;
	v->a[142682] = 5;
	v->a[142683] = actions(57);
	v->a[142684] = 1;
	v->a[142685] = sym_comment;
	v->a[142686] = actions(643);
	v->a[142687] = 1;
	v->a[142688] = anon_sym_LPAREN;
	v->a[142689] = actions(647);
	v->a[142690] = 1;
	v->a[142691] = anon_sym_LBRACE;
	v->a[142692] = actions(8509);
	v->a[142693] = 1;
	v->a[142694] = anon_sym_if;
	v->a[142695] = state(2705);
	v->a[142696] = 3;
	v->a[142697] = sym_if_statement;
	v->a[142698] = sym_compound_statement;
	v->a[142699] = sym_subshell;
	small_parse_table_7135(v);
}

/* EOF small_parse_table_1426.c */
