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
	v->a[47600] = actions(1605);
	v->a[47601] = 1;
	v->a[47602] = aux_sym_heredoc_redirect_token1;
	v->a[47603] = state(596);
	v->a[47604] = 1;
	v->a[47605] = sym_terminator;
	v->a[47606] = actions(846);
	v->a[47607] = 2;
	v->a[47608] = anon_sym_SEMI_SEMI;
	v->a[47609] = anon_sym_SEMI;
	v->a[47610] = actions(848);
	v->a[47611] = 2;
	v->a[47612] = anon_sym_AMP_AMP;
	v->a[47613] = anon_sym_PIPE_PIPE;
	v->a[47614] = actions(850);
	v->a[47615] = 2;
	v->a[47616] = anon_sym_LT_LT;
	v->a[47617] = anon_sym_LT_LT_DASH;
	v->a[47618] = state(924);
	v->a[47619] = 3;
	small_parse_table_2381(v);
}

void	small_parse_table_2381(t_small_parse_table_array *v)
{
	v->a[47620] = sym_file_redirect;
	v->a[47621] = sym_heredoc_redirect;
	v->a[47622] = aux_sym_redirected_statement_repeat1;
	v->a[47623] = actions(1603);
	v->a[47624] = 7;
	v->a[47625] = anon_sym_LT;
	v->a[47626] = anon_sym_GT;
	v->a[47627] = anon_sym_GT_GT;
	v->a[47628] = anon_sym_LT_AMP;
	v->a[47629] = anon_sym_GT_AMP;
	v->a[47630] = anon_sym_GT_PIPE;
	v->a[47631] = anon_sym_LT_GT;
	v->a[47632] = 6;
	v->a[47633] = actions(3);
	v->a[47634] = 1;
	v->a[47635] = sym_comment;
	v->a[47636] = actions(1023);
	v->a[47637] = 1;
	v->a[47638] = sym_variable_name;
	v->a[47639] = actions(1621);
	small_parse_table_2382(v);
}

void	small_parse_table_2382(t_small_parse_table_array *v)
{
	v->a[47640] = 1;
	v->a[47641] = aux_sym_concatenation_token1;
	v->a[47642] = actions(1623);
	v->a[47643] = 1;
	v->a[47644] = sym__concat;
	v->a[47645] = state(835);
	v->a[47646] = 1;
	v->a[47647] = aux_sym_concatenation_repeat1;
	v->a[47648] = actions(1025);
	v->a[47649] = 16;
	v->a[47650] = anon_sym_LT;
	v->a[47651] = anon_sym_GT;
	v->a[47652] = anon_sym_GT_GT;
	v->a[47653] = anon_sym_LT_AMP;
	v->a[47654] = anon_sym_GT_AMP;
	v->a[47655] = anon_sym_GT_PIPE;
	v->a[47656] = anon_sym_LT_GT;
	v->a[47657] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47658] = anon_sym_DOLLAR;
	v->a[47659] = anon_sym_DQUOTE;
	small_parse_table_2383(v);
}

void	small_parse_table_2383(t_small_parse_table_array *v)
{
	v->a[47660] = sym_raw_string;
	v->a[47661] = sym_number;
	v->a[47662] = anon_sym_DOLLAR_LBRACE;
	v->a[47663] = anon_sym_DOLLAR_LPAREN;
	v->a[47664] = anon_sym_BQUOTE;
	v->a[47665] = sym_word;
	v->a[47666] = 10;
	v->a[47667] = actions(3);
	v->a[47668] = 1;
	v->a[47669] = sym_comment;
	v->a[47670] = actions(746);
	v->a[47671] = 1;
	v->a[47672] = anon_sym_PIPE;
	v->a[47673] = actions(752);
	v->a[47674] = 1;
	v->a[47675] = anon_sym_SEMI;
	v->a[47676] = actions(1595);
	v->a[47677] = 1;
	v->a[47678] = aux_sym_heredoc_redirect_token1;
	v->a[47679] = state(536);
	small_parse_table_2384(v);
}

void	small_parse_table_2384(t_small_parse_table_array *v)
{
	v->a[47680] = 1;
	v->a[47681] = sym_terminator;
	v->a[47682] = actions(748);
	v->a[47683] = 2;
	v->a[47684] = anon_sym_AMP_AMP;
	v->a[47685] = anon_sym_PIPE_PIPE;
	v->a[47686] = actions(750);
	v->a[47687] = 2;
	v->a[47688] = anon_sym_LT_LT;
	v->a[47689] = anon_sym_LT_LT_DASH;
	v->a[47690] = actions(842);
	v->a[47691] = 2;
	v->a[47692] = anon_sym_esac;
	v->a[47693] = anon_sym_SEMI_SEMI;
	v->a[47694] = state(931);
	v->a[47695] = 3;
	v->a[47696] = sym_file_redirect;
	v->a[47697] = sym_heredoc_redirect;
	v->a[47698] = aux_sym_redirected_statement_repeat1;
	v->a[47699] = actions(1593);
	small_parse_table_2385(v);
}

/* EOF small_parse_table_476.c */
