/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1136.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5680(t_small_parse_table_array *v)
{
	v->a[113600] = actions(6043);
	v->a[113601] = 2;
	v->a[113602] = sym_file_descriptor;
	v->a[113603] = aux_sym_heredoc_redirect_token1;
	v->a[113604] = actions(6045);
	v->a[113605] = 21;
	v->a[113606] = anon_sym_PIPE;
	v->a[113607] = anon_sym_SEMI_SEMI;
	v->a[113608] = anon_sym_SEMI_AMP;
	v->a[113609] = anon_sym_SEMI_SEMI_AMP;
	v->a[113610] = anon_sym_PIPE_AMP;
	v->a[113611] = anon_sym_AMP_AMP;
	v->a[113612] = anon_sym_PIPE_PIPE;
	v->a[113613] = anon_sym_LT;
	v->a[113614] = anon_sym_GT;
	v->a[113615] = anon_sym_GT_GT;
	v->a[113616] = anon_sym_AMP_GT;
	v->a[113617] = anon_sym_AMP_GT_GT;
	v->a[113618] = anon_sym_LT_AMP;
	v->a[113619] = anon_sym_GT_AMP;
	small_parse_table_5681(v);
}

void	small_parse_table_5681(t_small_parse_table_array *v)
{
	v->a[113620] = anon_sym_GT_PIPE;
	v->a[113621] = anon_sym_LT_AMP_DASH;
	v->a[113622] = anon_sym_GT_AMP_DASH;
	v->a[113623] = anon_sym_LT_LT;
	v->a[113624] = anon_sym_LT_LT_DASH;
	v->a[113625] = anon_sym_AMP;
	v->a[113626] = anon_sym_SEMI;
	v->a[113627] = 3;
	v->a[113628] = actions(3);
	v->a[113629] = 1;
	v->a[113630] = sym_comment;
	v->a[113631] = actions(6081);
	v->a[113632] = 2;
	v->a[113633] = sym_file_descriptor;
	v->a[113634] = aux_sym_heredoc_redirect_token1;
	v->a[113635] = actions(6083);
	v->a[113636] = 21;
	v->a[113637] = anon_sym_PIPE;
	v->a[113638] = anon_sym_SEMI_SEMI;
	v->a[113639] = anon_sym_SEMI_AMP;
	small_parse_table_5682(v);
}

void	small_parse_table_5682(t_small_parse_table_array *v)
{
	v->a[113640] = anon_sym_SEMI_SEMI_AMP;
	v->a[113641] = anon_sym_PIPE_AMP;
	v->a[113642] = anon_sym_AMP_AMP;
	v->a[113643] = anon_sym_PIPE_PIPE;
	v->a[113644] = anon_sym_LT;
	v->a[113645] = anon_sym_GT;
	v->a[113646] = anon_sym_GT_GT;
	v->a[113647] = anon_sym_AMP_GT;
	v->a[113648] = anon_sym_AMP_GT_GT;
	v->a[113649] = anon_sym_LT_AMP;
	v->a[113650] = anon_sym_GT_AMP;
	v->a[113651] = anon_sym_GT_PIPE;
	v->a[113652] = anon_sym_LT_AMP_DASH;
	v->a[113653] = anon_sym_GT_AMP_DASH;
	v->a[113654] = anon_sym_LT_LT;
	v->a[113655] = anon_sym_LT_LT_DASH;
	v->a[113656] = anon_sym_AMP;
	v->a[113657] = anon_sym_SEMI;
	v->a[113658] = 16;
	v->a[113659] = actions(3);
	small_parse_table_5683(v);
}

void	small_parse_table_5683(t_small_parse_table_array *v)
{
	v->a[113660] = 1;
	v->a[113661] = sym_comment;
	v->a[113662] = actions(4346);
	v->a[113663] = 1;
	v->a[113664] = aux_sym_number_token1;
	v->a[113665] = actions(4348);
	v->a[113666] = 1;
	v->a[113667] = aux_sym_number_token2;
	v->a[113668] = actions(4352);
	v->a[113669] = 1;
	v->a[113670] = anon_sym_DOLLAR_LPAREN;
	v->a[113671] = actions(4362);
	v->a[113672] = 1;
	v->a[113673] = sym__brace_start;
	v->a[113674] = actions(4550);
	v->a[113675] = 1;
	v->a[113676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113677] = actions(4554);
	v->a[113678] = 1;
	v->a[113679] = anon_sym_DQUOTE;
	small_parse_table_5684(v);
}

void	small_parse_table_5684(t_small_parse_table_array *v)
{
	v->a[113680] = actions(4556);
	v->a[113681] = 1;
	v->a[113682] = anon_sym_DOLLAR_LBRACE;
	v->a[113683] = actions(4558);
	v->a[113684] = 1;
	v->a[113685] = anon_sym_BQUOTE;
	v->a[113686] = actions(4560);
	v->a[113687] = 1;
	v->a[113688] = anon_sym_DOLLAR_BQUOTE;
	v->a[113689] = actions(6565);
	v->a[113690] = 1;
	v->a[113691] = sym_word;
	v->a[113692] = actions(6567);
	v->a[113693] = 1;
	v->a[113694] = anon_sym_DOLLAR;
	v->a[113695] = actions(6569);
	v->a[113696] = 1;
	v->a[113697] = sym__special_character;
	v->a[113698] = actions(6573);
	v->a[113699] = 1;
	small_parse_table_5685(v);
}

/* EOF small_parse_table_1136.c */
