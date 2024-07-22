/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_536.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2680(t_small_parse_table_array *v)
{
	v->a[53600] = sym_arithmetic_expansion;
	v->a[53601] = sym_string;
	v->a[53602] = sym_simple_expansion;
	v->a[53603] = sym_expansion;
	v->a[53604] = sym_command_substitution;
	v->a[53605] = 3;
	v->a[53606] = actions(3);
	v->a[53607] = 1;
	v->a[53608] = sym_comment;
	v->a[53609] = actions(694);
	v->a[53610] = 2;
	v->a[53611] = sym_file_descriptor;
	v->a[53612] = sym__concat;
	v->a[53613] = actions(692);
	v->a[53614] = 20;
	v->a[53615] = anon_sym_AMP_AMP;
	v->a[53616] = anon_sym_PIPE_PIPE;
	v->a[53617] = anon_sym_LT;
	v->a[53618] = anon_sym_GT;
	v->a[53619] = anon_sym_GT_GT;
	small_parse_table_2681(v);
}

void	small_parse_table_2681(t_small_parse_table_array *v)
{
	v->a[53620] = anon_sym_LT_AMP;
	v->a[53621] = anon_sym_GT_AMP;
	v->a[53622] = anon_sym_GT_PIPE;
	v->a[53623] = anon_sym_LT_GT;
	v->a[53624] = aux_sym_heredoc_redirect_token1;
	v->a[53625] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53626] = aux_sym_concatenation_token1;
	v->a[53627] = anon_sym_DOLLAR;
	v->a[53628] = anon_sym_DQUOTE;
	v->a[53629] = sym_raw_string;
	v->a[53630] = sym_number;
	v->a[53631] = anon_sym_DOLLAR_LBRACE;
	v->a[53632] = anon_sym_DOLLAR_LPAREN;
	v->a[53633] = anon_sym_BQUOTE;
	v->a[53634] = sym_word;
	v->a[53635] = 3;
	v->a[53636] = actions(3);
	v->a[53637] = 1;
	v->a[53638] = sym_comment;
	v->a[53639] = actions(686);
	small_parse_table_2682(v);
}

void	small_parse_table_2682(t_small_parse_table_array *v)
{
	v->a[53640] = 2;
	v->a[53641] = sym_file_descriptor;
	v->a[53642] = sym__concat;
	v->a[53643] = actions(684);
	v->a[53644] = 20;
	v->a[53645] = anon_sym_AMP_AMP;
	v->a[53646] = anon_sym_PIPE_PIPE;
	v->a[53647] = anon_sym_LT;
	v->a[53648] = anon_sym_GT;
	v->a[53649] = anon_sym_GT_GT;
	v->a[53650] = anon_sym_LT_AMP;
	v->a[53651] = anon_sym_GT_AMP;
	v->a[53652] = anon_sym_GT_PIPE;
	v->a[53653] = anon_sym_LT_GT;
	v->a[53654] = aux_sym_heredoc_redirect_token1;
	v->a[53655] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53656] = aux_sym_concatenation_token1;
	v->a[53657] = anon_sym_DOLLAR;
	v->a[53658] = anon_sym_DQUOTE;
	v->a[53659] = sym_raw_string;
	small_parse_table_2683(v);
}

void	small_parse_table_2683(t_small_parse_table_array *v)
{
	v->a[53660] = sym_number;
	v->a[53661] = anon_sym_DOLLAR_LBRACE;
	v->a[53662] = anon_sym_DOLLAR_LPAREN;
	v->a[53663] = anon_sym_BQUOTE;
	v->a[53664] = sym_word;
	v->a[53665] = 3;
	v->a[53666] = actions(3);
	v->a[53667] = 1;
	v->a[53668] = sym_comment;
	v->a[53669] = actions(599);
	v->a[53670] = 2;
	v->a[53671] = sym_file_descriptor;
	v->a[53672] = sym__concat;
	v->a[53673] = actions(597);
	v->a[53674] = 20;
	v->a[53675] = anon_sym_AMP_AMP;
	v->a[53676] = anon_sym_PIPE_PIPE;
	v->a[53677] = anon_sym_LT;
	v->a[53678] = anon_sym_GT;
	v->a[53679] = anon_sym_GT_GT;
	small_parse_table_2684(v);
}

void	small_parse_table_2684(t_small_parse_table_array *v)
{
	v->a[53680] = anon_sym_LT_AMP;
	v->a[53681] = anon_sym_GT_AMP;
	v->a[53682] = anon_sym_GT_PIPE;
	v->a[53683] = anon_sym_LT_GT;
	v->a[53684] = aux_sym_heredoc_redirect_token1;
	v->a[53685] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53686] = aux_sym_concatenation_token1;
	v->a[53687] = anon_sym_DOLLAR;
	v->a[53688] = anon_sym_DQUOTE;
	v->a[53689] = sym_raw_string;
	v->a[53690] = sym_number;
	v->a[53691] = anon_sym_DOLLAR_LBRACE;
	v->a[53692] = anon_sym_DOLLAR_LPAREN;
	v->a[53693] = anon_sym_BQUOTE;
	v->a[53694] = sym_word;
	v->a[53695] = 3;
	v->a[53696] = actions(3);
	v->a[53697] = 1;
	v->a[53698] = sym_comment;
	v->a[53699] = actions(571);
	small_parse_table_2685(v);
}

/* EOF small_parse_table_536.c */
