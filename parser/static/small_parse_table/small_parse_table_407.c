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
	v->a[40700] = anon_sym_DOLLAR_LPAREN;
	v->a[40701] = anon_sym_BQUOTE;
	v->a[40702] = sym_word;
	v->a[40703] = actions(1424);
	v->a[40704] = 9;
	v->a[40705] = anon_sym_PIPE;
	v->a[40706] = anon_sym_SEMI_SEMI;
	v->a[40707] = anon_sym_AMP_AMP;
	v->a[40708] = anon_sym_PIPE_PIPE;
	v->a[40709] = anon_sym_LT_LT;
	v->a[40710] = anon_sym_LT_LT_DASH;
	v->a[40711] = aux_sym_heredoc_redirect_token1;
	v->a[40712] = anon_sym_AMP;
	v->a[40713] = anon_sym_SEMI;
	v->a[40714] = 6;
	v->a[40715] = actions(3);
	v->a[40716] = 1;
	v->a[40717] = sym_comment;
	v->a[40718] = actions(1045);
	v->a[40719] = 1;
	small_parse_table_2036(v);
}

void	small_parse_table_2036(t_small_parse_table_array *v)
{
	v->a[40720] = aux_sym_concatenation_token1;
	v->a[40721] = actions(1123);
	v->a[40722] = 1;
	v->a[40723] = sym__concat;
	v->a[40724] = state(674);
	v->a[40725] = 1;
	v->a[40726] = aux_sym_concatenation_repeat1;
	v->a[40727] = actions(1055);
	v->a[40728] = 2;
	v->a[40729] = sym_file_descriptor;
	v->a[40730] = sym__bare_dollar;
	v->a[40731] = actions(1057);
	v->a[40732] = 23;
	v->a[40733] = anon_sym_LPAREN;
	v->a[40734] = anon_sym_PIPE;
	v->a[40735] = anon_sym_AMP_AMP;
	v->a[40736] = anon_sym_PIPE_PIPE;
	v->a[40737] = anon_sym_LT;
	v->a[40738] = anon_sym_GT;
	v->a[40739] = anon_sym_GT_GT;
	small_parse_table_2037(v);
}

void	small_parse_table_2037(t_small_parse_table_array *v)
{
	v->a[40740] = anon_sym_LT_AMP;
	v->a[40741] = anon_sym_GT_AMP;
	v->a[40742] = anon_sym_GT_PIPE;
	v->a[40743] = anon_sym_LT_GT;
	v->a[40744] = anon_sym_LT_LT;
	v->a[40745] = anon_sym_LT_LT_DASH;
	v->a[40746] = aux_sym_heredoc_redirect_token1;
	v->a[40747] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40748] = anon_sym_DOLLAR;
	v->a[40749] = anon_sym_DQUOTE;
	v->a[40750] = sym_raw_string;
	v->a[40751] = sym_number;
	v->a[40752] = anon_sym_DOLLAR_LBRACE;
	v->a[40753] = anon_sym_DOLLAR_LPAREN;
	v->a[40754] = anon_sym_BQUOTE;
	v->a[40755] = sym_word;
	v->a[40756] = 16;
	v->a[40757] = actions(3);
	v->a[40758] = 1;
	v->a[40759] = sym_comment;
	small_parse_table_2038(v);
}

void	small_parse_table_2038(t_small_parse_table_array *v)
{
	v->a[40760] = actions(329);
	v->a[40761] = 1;
	v->a[40762] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40763] = actions(331);
	v->a[40764] = 1;
	v->a[40765] = anon_sym_DOLLAR;
	v->a[40766] = actions(333);
	v->a[40767] = 1;
	v->a[40768] = anon_sym_DQUOTE;
	v->a[40769] = actions(337);
	v->a[40770] = 1;
	v->a[40771] = anon_sym_DOLLAR_LBRACE;
	v->a[40772] = actions(339);
	v->a[40773] = 1;
	v->a[40774] = anon_sym_DOLLAR_LPAREN;
	v->a[40775] = actions(341);
	v->a[40776] = 1;
	v->a[40777] = anon_sym_BQUOTE;
	v->a[40778] = actions(359);
	v->a[40779] = 1;
	small_parse_table_2039(v);
}

void	small_parse_table_2039(t_small_parse_table_array *v)
{
	v->a[40780] = sym_variable_name;
	v->a[40781] = actions(1152);
	v->a[40782] = 1;
	v->a[40783] = sym_file_descriptor;
	v->a[40784] = state(366);
	v->a[40785] = 1;
	v->a[40786] = sym_command_name;
	v->a[40787] = state(890);
	v->a[40788] = 1;
	v->a[40789] = sym_concatenation;
	v->a[40790] = state(1225);
	v->a[40791] = 1;
	v->a[40792] = sym_file_redirect;
	v->a[40793] = state(1024);
	v->a[40794] = 2;
	v->a[40795] = sym_variable_assignment;
	v->a[40796] = aux_sym_command_repeat1;
	v->a[40797] = actions(335);
	v->a[40798] = 3;
	v->a[40799] = sym_raw_string;
	small_parse_table_2040(v);
}

/* EOF small_parse_table_407.c */
