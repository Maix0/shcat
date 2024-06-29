/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_476.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2380(t_small_parse_table_array *v)
{
	v->a[47600] = 1;
	v->a[47601] = sym_variable_name;
	v->a[47602] = actions(1068);
	v->a[47603] = 1;
	v->a[47604] = sym_file_descriptor;
	v->a[47605] = state(251);
	v->a[47606] = 1;
	v->a[47607] = sym_command_name;
	v->a[47608] = state(624);
	v->a[47609] = 1;
	v->a[47610] = sym_concatenation;
	v->a[47611] = state(1343);
	v->a[47612] = 1;
	v->a[47613] = sym_file_redirect;
	v->a[47614] = actions(1066);
	v->a[47615] = 2;
	v->a[47616] = anon_sym_LT_AMP_DASH;
	v->a[47617] = anon_sym_GT_AMP_DASH;
	v->a[47618] = state(1100);
	v->a[47619] = 2;
	small_parse_table_2381(v);
}

void	small_parse_table_2381(t_small_parse_table_array *v)
{
	v->a[47620] = sym_variable_assignment;
	v->a[47621] = aux_sym_command_repeat1;
	v->a[47622] = actions(371);
	v->a[47623] = 3;
	v->a[47624] = sym_raw_string;
	v->a[47625] = sym_number;
	v->a[47626] = sym_word;
	v->a[47627] = state(734);
	v->a[47628] = 5;
	v->a[47629] = sym_arithmetic_expansion;
	v->a[47630] = sym_string;
	v->a[47631] = sym_simple_expansion;
	v->a[47632] = sym_expansion;
	v->a[47633] = sym_command_substitution;
	v->a[47634] = actions(1064);
	v->a[47635] = 8;
	v->a[47636] = anon_sym_LT;
	v->a[47637] = anon_sym_GT;
	v->a[47638] = anon_sym_GT_GT;
	v->a[47639] = anon_sym_AMP_GT;
	small_parse_table_2382(v);
}

void	small_parse_table_2382(t_small_parse_table_array *v)
{
	v->a[47640] = anon_sym_AMP_GT_GT;
	v->a[47641] = anon_sym_LT_AMP;
	v->a[47642] = anon_sym_GT_AMP;
	v->a[47643] = anon_sym_GT_PIPE;
	v->a[47644] = 7;
	v->a[47645] = actions(3);
	v->a[47646] = 1;
	v->a[47647] = sym_comment;
	v->a[47648] = actions(1536);
	v->a[47649] = 1;
	v->a[47650] = sym_file_descriptor;
	v->a[47651] = actions(1539);
	v->a[47652] = 1;
	v->a[47653] = sym_variable_name;
	v->a[47654] = actions(1638);
	v->a[47655] = 1;
	v->a[47656] = anon_sym_RPAREN;
	v->a[47657] = actions(1526);
	v->a[47658] = 9;
	v->a[47659] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2383(v);
}

void	small_parse_table_2383(t_small_parse_table_array *v)
{
	v->a[47660] = anon_sym_DOLLAR;
	v->a[47661] = anon_sym_DQUOTE;
	v->a[47662] = sym_raw_string;
	v->a[47663] = sym_number;
	v->a[47664] = anon_sym_DOLLAR_LBRACE;
	v->a[47665] = anon_sym_DOLLAR_LPAREN;
	v->a[47666] = anon_sym_BQUOTE;
	v->a[47667] = sym_word;
	v->a[47668] = actions(1528);
	v->a[47669] = 9;
	v->a[47670] = anon_sym_PIPE;
	v->a[47671] = anon_sym_SEMI_SEMI;
	v->a[47672] = anon_sym_AMP_AMP;
	v->a[47673] = anon_sym_PIPE_PIPE;
	v->a[47674] = anon_sym_LT_LT;
	v->a[47675] = anon_sym_LT_LT_DASH;
	v->a[47676] = aux_sym_heredoc_redirect_token1;
	v->a[47677] = anon_sym_AMP;
	v->a[47678] = anon_sym_SEMI;
	v->a[47679] = actions(1533);
	small_parse_table_2384(v);
}

void	small_parse_table_2384(t_small_parse_table_array *v)
{
	v->a[47680] = 10;
	v->a[47681] = anon_sym_LT;
	v->a[47682] = anon_sym_GT;
	v->a[47683] = anon_sym_GT_GT;
	v->a[47684] = anon_sym_AMP_GT;
	v->a[47685] = anon_sym_AMP_GT_GT;
	v->a[47686] = anon_sym_LT_AMP;
	v->a[47687] = anon_sym_GT_AMP;
	v->a[47688] = anon_sym_GT_PIPE;
	v->a[47689] = anon_sym_LT_AMP_DASH;
	v->a[47690] = anon_sym_GT_AMP_DASH;
	v->a[47691] = 3;
	v->a[47692] = actions(3);
	v->a[47693] = 1;
	v->a[47694] = sym_comment;
	v->a[47695] = actions(1580);
	v->a[47696] = 3;
	v->a[47697] = sym_file_descriptor;
	v->a[47698] = sym__bare_dollar;
	v->a[47699] = ts_builtin_sym_end;
	small_parse_table_2385(v);
}

/* EOF small_parse_table_476.c */
