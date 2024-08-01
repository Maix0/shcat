/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_407.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2035(t_small_parse_table_array *v)
{
	v->a[40700] = 1;
	v->a[40701] = sym_comment;
	v->a[40702] = actions(921);
	v->a[40703] = 1;
	v->a[40704] = sym_variable_name;
	v->a[40705] = actions(1826);
	v->a[40706] = 1;
	v->a[40707] = aux_sym_concatenation_token1;
	v->a[40708] = actions(1866);
	v->a[40709] = 1;
	v->a[40710] = sym__concat;
	v->a[40711] = state(787);
	v->a[40712] = 1;
	v->a[40713] = aux_sym_concatenation_repeat1;
	v->a[40714] = actions(923);
	v->a[40715] = 12;
	v->a[40716] = anon_sym_LT;
	v->a[40717] = anon_sym_GT;
	v->a[40718] = anon_sym_GT_GT;
	v->a[40719] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2036(v);
}

void	small_parse_table_2036(t_small_parse_table_array *v)
{
	v->a[40720] = anon_sym_DOLLAR;
	v->a[40721] = anon_sym_DQUOTE;
	v->a[40722] = sym_raw_string;
	v->a[40723] = sym_number;
	v->a[40724] = anon_sym_DOLLAR_LBRACE;
	v->a[40725] = anon_sym_DOLLAR_LPAREN;
	v->a[40726] = anon_sym_BQUOTE;
	v->a[40727] = sym_word;
	v->a[40728] = 10;
	v->a[40729] = actions(3);
	v->a[40730] = 1;
	v->a[40731] = sym_comment;
	v->a[40732] = actions(580);
	v->a[40733] = 1;
	v->a[40734] = anon_sym_PIPE;
	v->a[40735] = actions(591);
	v->a[40736] = 1;
	v->a[40737] = anon_sym_RPAREN;
	v->a[40738] = actions(597);
	v->a[40739] = 1;
	small_parse_table_2037(v);
}

void	small_parse_table_2037(t_small_parse_table_array *v)
{
	v->a[40740] = anon_sym_LT_LT;
	v->a[40741] = actions(1870);
	v->a[40742] = 1;
	v->a[40743] = aux_sym_heredoc_redirect_token1;
	v->a[40744] = state(380);
	v->a[40745] = 1;
	v->a[40746] = sym_terminator;
	v->a[40747] = actions(593);
	v->a[40748] = 2;
	v->a[40749] = anon_sym_SEMI_SEMI;
	v->a[40750] = anon_sym_SEMI;
	v->a[40751] = actions(595);
	v->a[40752] = 2;
	v->a[40753] = anon_sym_AMP_AMP;
	v->a[40754] = anon_sym_PIPE_PIPE;
	v->a[40755] = actions(1868);
	v->a[40756] = 3;
	v->a[40757] = anon_sym_LT;
	v->a[40758] = anon_sym_GT;
	v->a[40759] = anon_sym_GT_GT;
	small_parse_table_2038(v);
}

void	small_parse_table_2038(t_small_parse_table_array *v)
{
	v->a[40760] = state(916);
	v->a[40761] = 3;
	v->a[40762] = sym_file_redirect;
	v->a[40763] = sym_heredoc_redirect;
	v->a[40764] = aux_sym_redirected_statement_repeat1;
	v->a[40765] = 10;
	v->a[40766] = actions(3);
	v->a[40767] = 1;
	v->a[40768] = sym_comment;
	v->a[40769] = actions(580);
	v->a[40770] = 1;
	v->a[40771] = anon_sym_PIPE;
	v->a[40772] = actions(597);
	v->a[40773] = 1;
	v->a[40774] = anon_sym_LT_LT;
	v->a[40775] = actions(716);
	v->a[40776] = 1;
	v->a[40777] = ts_builtin_sym_end;
	v->a[40778] = actions(1874);
	v->a[40779] = 1;
	small_parse_table_2039(v);
}

void	small_parse_table_2039(t_small_parse_table_array *v)
{
	v->a[40780] = aux_sym_heredoc_redirect_token1;
	v->a[40781] = state(449);
	v->a[40782] = 1;
	v->a[40783] = sym_terminator;
	v->a[40784] = actions(693);
	v->a[40785] = 2;
	v->a[40786] = anon_sym_SEMI_SEMI;
	v->a[40787] = anon_sym_SEMI;
	v->a[40788] = actions(695);
	v->a[40789] = 2;
	v->a[40790] = anon_sym_AMP_AMP;
	v->a[40791] = anon_sym_PIPE_PIPE;
	v->a[40792] = actions(1872);
	v->a[40793] = 3;
	v->a[40794] = anon_sym_LT;
	v->a[40795] = anon_sym_GT;
	v->a[40796] = anon_sym_GT_GT;
	v->a[40797] = state(922);
	v->a[40798] = 3;
	v->a[40799] = sym_file_redirect;
	small_parse_table_2040(v);
}

/* EOF small_parse_table_407.c */
