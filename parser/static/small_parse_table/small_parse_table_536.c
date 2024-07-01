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
	v->a[53600] = 3;
	v->a[53601] = actions(3);
	v->a[53602] = 1;
	v->a[53603] = sym_comment;
	v->a[53604] = actions(662);
	v->a[53605] = 2;
	v->a[53606] = sym_file_descriptor;
	v->a[53607] = sym__concat;
	v->a[53608] = actions(660);
	v->a[53609] = 20;
	v->a[53610] = anon_sym_AMP_AMP;
	v->a[53611] = anon_sym_PIPE_PIPE;
	v->a[53612] = anon_sym_LT;
	v->a[53613] = anon_sym_GT;
	v->a[53614] = anon_sym_GT_GT;
	v->a[53615] = anon_sym_LT_AMP;
	v->a[53616] = anon_sym_GT_AMP;
	v->a[53617] = anon_sym_GT_PIPE;
	v->a[53618] = anon_sym_LT_GT;
	v->a[53619] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2681(v);
}

void	small_parse_table_2681(t_small_parse_table_array *v)
{
	v->a[53620] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53621] = aux_sym_concatenation_token1;
	v->a[53622] = anon_sym_DOLLAR;
	v->a[53623] = anon_sym_DQUOTE;
	v->a[53624] = sym_raw_string;
	v->a[53625] = sym_number;
	v->a[53626] = anon_sym_DOLLAR_LBRACE;
	v->a[53627] = anon_sym_DOLLAR_LPAREN;
	v->a[53628] = anon_sym_BQUOTE;
	v->a[53629] = sym_word;
	v->a[53630] = 3;
	v->a[53631] = actions(3);
	v->a[53632] = 1;
	v->a[53633] = sym_comment;
	v->a[53634] = actions(815);
	v->a[53635] = 2;
	v->a[53636] = sym_file_descriptor;
	v->a[53637] = sym__concat;
	v->a[53638] = actions(813);
	v->a[53639] = 20;
	small_parse_table_2682(v);
}

void	small_parse_table_2682(t_small_parse_table_array *v)
{
	v->a[53640] = anon_sym_AMP_AMP;
	v->a[53641] = anon_sym_PIPE_PIPE;
	v->a[53642] = anon_sym_LT;
	v->a[53643] = anon_sym_GT;
	v->a[53644] = anon_sym_GT_GT;
	v->a[53645] = anon_sym_LT_AMP;
	v->a[53646] = anon_sym_GT_AMP;
	v->a[53647] = anon_sym_GT_PIPE;
	v->a[53648] = anon_sym_LT_GT;
	v->a[53649] = aux_sym_heredoc_redirect_token1;
	v->a[53650] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53651] = aux_sym_concatenation_token1;
	v->a[53652] = anon_sym_DOLLAR;
	v->a[53653] = anon_sym_DQUOTE;
	v->a[53654] = sym_raw_string;
	v->a[53655] = sym_number;
	v->a[53656] = anon_sym_DOLLAR_LBRACE;
	v->a[53657] = anon_sym_DOLLAR_LPAREN;
	v->a[53658] = anon_sym_BQUOTE;
	v->a[53659] = sym_word;
	small_parse_table_2683(v);
}

void	small_parse_table_2683(t_small_parse_table_array *v)
{
	v->a[53660] = 16;
	v->a[53661] = actions(3);
	v->a[53662] = 1;
	v->a[53663] = sym_comment;
	v->a[53664] = actions(1634);
	v->a[53665] = 1;
	v->a[53666] = anon_sym_LPAREN;
	v->a[53667] = actions(1638);
	v->a[53668] = 1;
	v->a[53669] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53670] = actions(1640);
	v->a[53671] = 1;
	v->a[53672] = anon_sym_DOLLAR;
	v->a[53673] = actions(1642);
	v->a[53674] = 1;
	v->a[53675] = anon_sym_DQUOTE;
	v->a[53676] = actions(1644);
	v->a[53677] = 1;
	v->a[53678] = anon_sym_DOLLAR_LBRACE;
	v->a[53679] = actions(1646);
	small_parse_table_2684(v);
}

void	small_parse_table_2684(t_small_parse_table_array *v)
{
	v->a[53680] = 1;
	v->a[53681] = anon_sym_DOLLAR_LPAREN;
	v->a[53682] = actions(1648);
	v->a[53683] = 1;
	v->a[53684] = anon_sym_BQUOTE;
	v->a[53685] = actions(1650);
	v->a[53686] = 1;
	v->a[53687] = sym_extglob_pattern;
	v->a[53688] = actions(1843);
	v->a[53689] = 1;
	v->a[53690] = anon_sym_esac;
	v->a[53691] = state(1091);
	v->a[53692] = 1;
	v->a[53693] = aux_sym_case_statement_repeat1;
	v->a[53694] = state(1713);
	v->a[53695] = 1;
	v->a[53696] = sym_case_item;
	v->a[53697] = state(2048);
	v->a[53698] = 1;
	v->a[53699] = sym__case_item_last;
	small_parse_table_2685(v);
}

/* EOF small_parse_table_536.c */
