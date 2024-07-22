/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_527.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2635(t_small_parse_table_array *v)
{
	v->a[52700] = actions(1846);
	v->a[52701] = 1;
	v->a[52702] = sym__concat;
	v->a[52703] = state(910);
	v->a[52704] = 1;
	v->a[52705] = aux_sym_concatenation_repeat1;
	v->a[52706] = actions(1105);
	v->a[52707] = 19;
	v->a[52708] = anon_sym_AMP_AMP;
	v->a[52709] = anon_sym_PIPE_PIPE;
	v->a[52710] = anon_sym_LT;
	v->a[52711] = anon_sym_GT;
	v->a[52712] = anon_sym_GT_GT;
	v->a[52713] = anon_sym_LT_AMP;
	v->a[52714] = anon_sym_GT_AMP;
	v->a[52715] = anon_sym_GT_PIPE;
	v->a[52716] = anon_sym_LT_GT;
	v->a[52717] = aux_sym_heredoc_redirect_token1;
	v->a[52718] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52719] = anon_sym_DOLLAR;
	small_parse_table_2636(v);
}

void	small_parse_table_2636(t_small_parse_table_array *v)
{
	v->a[52720] = anon_sym_DQUOTE;
	v->a[52721] = sym_raw_string;
	v->a[52722] = sym_number;
	v->a[52723] = anon_sym_DOLLAR_LBRACE;
	v->a[52724] = anon_sym_DOLLAR_LPAREN;
	v->a[52725] = anon_sym_BQUOTE;
	v->a[52726] = sym_word;
	v->a[52727] = 5;
	v->a[52728] = actions(3);
	v->a[52729] = 1;
	v->a[52730] = sym_comment;
	v->a[52731] = actions(1853);
	v->a[52732] = 1;
	v->a[52733] = sym_variable_name;
	v->a[52734] = actions(1851);
	v->a[52735] = 2;
	v->a[52736] = aux_sym__simple_variable_name_token1;
	v->a[52737] = aux_sym__multiline_variable_name_token1;
	v->a[52738] = actions(1849);
	v->a[52739] = 8;
	small_parse_table_2637(v);
}

void	small_parse_table_2637(t_small_parse_table_array *v)
{
	v->a[52740] = anon_sym_BANG;
	v->a[52741] = anon_sym_DASH;
	v->a[52742] = anon_sym_STAR;
	v->a[52743] = anon_sym_QMARK;
	v->a[52744] = anon_sym_DOLLAR;
	v->a[52745] = anon_sym_POUND;
	v->a[52746] = anon_sym_AT;
	v->a[52747] = anon_sym_0;
	v->a[52748] = actions(361);
	v->a[52749] = 11;
	v->a[52750] = anon_sym_SEMI_SEMI;
	v->a[52751] = aux_sym_heredoc_redirect_token1;
	v->a[52752] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52753] = anon_sym_DQUOTE;
	v->a[52754] = sym_raw_string;
	v->a[52755] = sym_number;
	v->a[52756] = anon_sym_DOLLAR_LBRACE;
	v->a[52757] = anon_sym_DOLLAR_LPAREN;
	v->a[52758] = anon_sym_BQUOTE;
	v->a[52759] = sym_word;
	small_parse_table_2638(v);
}

void	small_parse_table_2638(t_small_parse_table_array *v)
{
	v->a[52760] = anon_sym_SEMI;
	v->a[52761] = 16;
	v->a[52762] = actions(3);
	v->a[52763] = 1;
	v->a[52764] = sym_comment;
	v->a[52765] = actions(1720);
	v->a[52766] = 1;
	v->a[52767] = anon_sym_LPAREN;
	v->a[52768] = actions(1724);
	v->a[52769] = 1;
	v->a[52770] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52771] = actions(1726);
	v->a[52772] = 1;
	v->a[52773] = anon_sym_DOLLAR;
	v->a[52774] = actions(1728);
	v->a[52775] = 1;
	v->a[52776] = anon_sym_DQUOTE;
	v->a[52777] = actions(1730);
	v->a[52778] = 1;
	v->a[52779] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2639(v);
}

void	small_parse_table_2639(t_small_parse_table_array *v)
{
	v->a[52780] = actions(1732);
	v->a[52781] = 1;
	v->a[52782] = anon_sym_DOLLAR_LPAREN;
	v->a[52783] = actions(1734);
	v->a[52784] = 1;
	v->a[52785] = anon_sym_BQUOTE;
	v->a[52786] = actions(1736);
	v->a[52787] = 1;
	v->a[52788] = sym_extglob_pattern;
	v->a[52789] = actions(1758);
	v->a[52790] = 1;
	v->a[52791] = anon_sym_esac;
	v->a[52792] = state(1021);
	v->a[52793] = 1;
	v->a[52794] = aux_sym_case_statement_repeat1;
	v->a[52795] = state(1682);
	v->a[52796] = 1;
	v->a[52797] = sym_case_item;
	v->a[52798] = state(1955);
	v->a[52799] = 1;
	small_parse_table_2640(v);
}

/* EOF small_parse_table_527.c */
