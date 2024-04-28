/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2956.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14780(t_small_parse_table_array *v)
{
	v->a[295600] = 2;
	v->a[295601] = anon_sym_LPAREN_LPAREN;
	v->a[295602] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295603] = state(6127);
	v->a[295604] = 4;
	v->a[295605] = sym_arithmetic_expansion;
	v->a[295606] = sym_simple_expansion;
	v->a[295607] = sym_expansion;
	v->a[295608] = sym_command_substitution;
	v->a[295609] = 3;
	v->a[295610] = actions(3);
	v->a[295611] = 1;
	v->a[295612] = sym_comment;
	v->a[295613] = actions(2096);
	v->a[295614] = 2;
	v->a[295615] = sym_file_descriptor;
	v->a[295616] = aux_sym_heredoc_redirect_token1;
	v->a[295617] = actions(2094);
	v->a[295618] = 13;
	v->a[295619] = anon_sym_PIPE_PIPE;
	small_parse_table_14781(v);
}

void	small_parse_table_14781(t_small_parse_table_array *v)
{
	v->a[295620] = anon_sym_AMP_AMP;
	v->a[295621] = anon_sym_LT;
	v->a[295622] = anon_sym_GT;
	v->a[295623] = anon_sym_GT_GT;
	v->a[295624] = anon_sym_AMP_GT;
	v->a[295625] = anon_sym_AMP_GT_GT;
	v->a[295626] = anon_sym_LT_AMP;
	v->a[295627] = anon_sym_GT_AMP;
	v->a[295628] = anon_sym_GT_PIPE;
	v->a[295629] = anon_sym_LT_AMP_DASH;
	v->a[295630] = anon_sym_GT_AMP_DASH;
	v->a[295631] = anon_sym_LT_LT_LT;
	v->a[295632] = 12;
	v->a[295633] = actions(3);
	v->a[295634] = 1;
	v->a[295635] = sym_comment;
	v->a[295636] = actions(13060);
	v->a[295637] = 1;
	v->a[295638] = anon_sym_DOLLAR_LBRACK;
	v->a[295639] = actions(13066);
	small_parse_table_14782(v);
}

void	small_parse_table_14782(t_small_parse_table_array *v)
{
	v->a[295640] = 1;
	v->a[295641] = sym_string_content;
	v->a[295642] = actions(13068);
	v->a[295643] = 1;
	v->a[295644] = anon_sym_DOLLAR_LBRACE;
	v->a[295645] = actions(13070);
	v->a[295646] = 1;
	v->a[295647] = anon_sym_DOLLAR_LPAREN;
	v->a[295648] = actions(13072);
	v->a[295649] = 1;
	v->a[295650] = anon_sym_BQUOTE;
	v->a[295651] = actions(13074);
	v->a[295652] = 1;
	v->a[295653] = anon_sym_DOLLAR_BQUOTE;
	v->a[295654] = actions(13216);
	v->a[295655] = 1;
	v->a[295656] = anon_sym_DOLLAR;
	v->a[295657] = actions(13218);
	v->a[295658] = 1;
	v->a[295659] = anon_sym_DQUOTE;
	small_parse_table_14783(v);
}

void	small_parse_table_14783(t_small_parse_table_array *v)
{
	v->a[295660] = state(5768);
	v->a[295661] = 1;
	v->a[295662] = aux_sym_string_repeat1;
	v->a[295663] = actions(13058);
	v->a[295664] = 2;
	v->a[295665] = anon_sym_LPAREN_LPAREN;
	v->a[295666] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295667] = state(6127);
	v->a[295668] = 4;
	v->a[295669] = sym_arithmetic_expansion;
	v->a[295670] = sym_simple_expansion;
	v->a[295671] = sym_expansion;
	v->a[295672] = sym_command_substitution;
	v->a[295673] = 12;
	v->a[295674] = actions(3);
	v->a[295675] = 1;
	v->a[295676] = sym_comment;
	v->a[295677] = actions(13060);
	v->a[295678] = 1;
	v->a[295679] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_14784(v);
}

void	small_parse_table_14784(t_small_parse_table_array *v)
{
	v->a[295680] = actions(13066);
	v->a[295681] = 1;
	v->a[295682] = sym_string_content;
	v->a[295683] = actions(13068);
	v->a[295684] = 1;
	v->a[295685] = anon_sym_DOLLAR_LBRACE;
	v->a[295686] = actions(13070);
	v->a[295687] = 1;
	v->a[295688] = anon_sym_DOLLAR_LPAREN;
	v->a[295689] = actions(13072);
	v->a[295690] = 1;
	v->a[295691] = anon_sym_BQUOTE;
	v->a[295692] = actions(13074);
	v->a[295693] = 1;
	v->a[295694] = anon_sym_DOLLAR_BQUOTE;
	v->a[295695] = actions(13220);
	v->a[295696] = 1;
	v->a[295697] = anon_sym_DOLLAR;
	v->a[295698] = actions(13222);
	v->a[295699] = 1;
	small_parse_table_14785(v);
}

/* EOF small_parse_table_2956.c */
