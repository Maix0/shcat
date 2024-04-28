/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3096.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15480(t_small_parse_table_array *v)
{
	v->a[309600] = 1;
	v->a[309601] = aux_sym__expansion_regex_token1;
	v->a[309602] = actions(14384);
	v->a[309603] = 1;
	v->a[309604] = sym_regex;
	v->a[309605] = state(6194);
	v->a[309606] = 2;
	v->a[309607] = sym_string;
	v->a[309608] = aux_sym__expansion_regex_repeat1;
	v->a[309609] = 7;
	v->a[309610] = actions(71);
	v->a[309611] = 1;
	v->a[309612] = sym_comment;
	v->a[309613] = actions(7793);
	v->a[309614] = 1;
	v->a[309615] = aux_sym_number_token1;
	v->a[309616] = actions(7795);
	v->a[309617] = 1;
	v->a[309618] = aux_sym_number_token2;
	v->a[309619] = actions(14387);
	small_parse_table_15481(v);
}

void	small_parse_table_15481(t_small_parse_table_array *v)
{
	v->a[309620] = 1;
	v->a[309621] = anon_sym_DOLLAR_LBRACE;
	v->a[309622] = actions(14389);
	v->a[309623] = 1;
	v->a[309624] = aux_sym__simple_variable_name_token1;
	v->a[309625] = state(6227);
	v->a[309626] = 1;
	v->a[309627] = sym__expansion_max_length_binary_expression;
	v->a[309628] = state(6215);
	v->a[309629] = 3;
	v->a[309630] = sym_number;
	v->a[309631] = sym_expansion;
	v->a[309632] = sym__expansion_max_length_expression;
	v->a[309633] = 7;
	v->a[309634] = actions(71);
	v->a[309635] = 1;
	v->a[309636] = sym_comment;
	v->a[309637] = actions(7793);
	v->a[309638] = 1;
	v->a[309639] = aux_sym_number_token1;
	small_parse_table_15482(v);
}

void	small_parse_table_15482(t_small_parse_table_array *v)
{
	v->a[309640] = actions(7795);
	v->a[309641] = 1;
	v->a[309642] = aux_sym_number_token2;
	v->a[309643] = actions(14387);
	v->a[309644] = 1;
	v->a[309645] = anon_sym_DOLLAR_LBRACE;
	v->a[309646] = actions(14391);
	v->a[309647] = 1;
	v->a[309648] = aux_sym__simple_variable_name_token1;
	v->a[309649] = state(6227);
	v->a[309650] = 1;
	v->a[309651] = sym__expansion_max_length_binary_expression;
	v->a[309652] = state(6212);
	v->a[309653] = 3;
	v->a[309654] = sym_number;
	v->a[309655] = sym_expansion;
	v->a[309656] = sym__expansion_max_length_expression;
	v->a[309657] = 8;
	v->a[309658] = actions(3);
	v->a[309659] = 1;
	small_parse_table_15483(v);
}

void	small_parse_table_15483(t_small_parse_table_array *v)
{
	v->a[309660] = sym_comment;
	v->a[309661] = actions(14344);
	v->a[309662] = 1;
	v->a[309663] = anon_sym_RPAREN;
	v->a[309664] = actions(14346);
	v->a[309665] = 1;
	v->a[309666] = anon_sym_DQUOTE;
	v->a[309667] = actions(14352);
	v->a[309668] = 1;
	v->a[309669] = aux_sym__expansion_regex_token1;
	v->a[309670] = actions(14393);
	v->a[309671] = 1;
	v->a[309672] = sym_raw_string;
	v->a[309673] = actions(14395);
	v->a[309674] = 1;
	v->a[309675] = anon_sym_RBRACE3;
	v->a[309676] = actions(14397);
	v->a[309677] = 1;
	v->a[309678] = sym_regex;
	v->a[309679] = state(6190);
	small_parse_table_15484(v);
}

void	small_parse_table_15484(t_small_parse_table_array *v)
{
	v->a[309680] = 2;
	v->a[309681] = sym_string;
	v->a[309682] = aux_sym__expansion_regex_repeat1;
	v->a[309683] = 7;
	v->a[309684] = actions(3);
	v->a[309685] = 1;
	v->a[309686] = sym_comment;
	v->a[309687] = actions(14334);
	v->a[309688] = 1;
	v->a[309689] = aux_sym_concatenation_token1;
	v->a[309690] = actions(14336);
	v->a[309691] = 1;
	v->a[309692] = sym__concat;
	v->a[309693] = actions(14399);
	v->a[309694] = 1;
	v->a[309695] = anon_sym_in;
	v->a[309696] = actions(14403);
	v->a[309697] = 1;
	v->a[309698] = aux_sym_heredoc_redirect_token1;
	v->a[309699] = state(6193);
	small_parse_table_15485(v);
}

/* EOF small_parse_table_3096.c */
