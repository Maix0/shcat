/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_807.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4035(t_small_parse_table_array *v)
{
	v->a[80700] = sym_raw_string;
	v->a[80701] = sym_word;
	v->a[80702] = state(221);
	v->a[80703] = 2;
	v->a[80704] = sym_concatenation;
	v->a[80705] = aux_sym_for_statement_repeat1;
	v->a[80706] = state(424);
	v->a[80707] = 6;
	v->a[80708] = sym_arithmetic_expansion;
	v->a[80709] = sym_string;
	v->a[80710] = sym_number;
	v->a[80711] = sym_simple_expansion;
	v->a[80712] = sym_expansion;
	v->a[80713] = sym_command_substitution;
	v->a[80714] = 12;
	v->a[80715] = actions(3);
	v->a[80716] = 1;
	v->a[80717] = sym_comment;
	v->a[80718] = actions(1749);
	v->a[80719] = 1;
	small_parse_table_4036(v);
}

void	small_parse_table_4036(t_small_parse_table_array *v)
{
	v->a[80720] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80721] = actions(1751);
	v->a[80722] = 1;
	v->a[80723] = anon_sym_DOLLAR;
	v->a[80724] = actions(1753);
	v->a[80725] = 1;
	v->a[80726] = anon_sym_DQUOTE;
	v->a[80727] = actions(1755);
	v->a[80728] = 1;
	v->a[80729] = aux_sym_number_token1;
	v->a[80730] = actions(1757);
	v->a[80731] = 1;
	v->a[80732] = aux_sym_number_token2;
	v->a[80733] = actions(1759);
	v->a[80734] = 1;
	v->a[80735] = anon_sym_DOLLAR_LBRACE;
	v->a[80736] = actions(1761);
	v->a[80737] = 1;
	v->a[80738] = anon_sym_DOLLAR_LPAREN;
	v->a[80739] = actions(1763);
	small_parse_table_4037(v);
}

void	small_parse_table_4037(t_small_parse_table_array *v)
{
	v->a[80740] = 1;
	v->a[80741] = anon_sym_BQUOTE;
	v->a[80742] = actions(1747);
	v->a[80743] = 2;
	v->a[80744] = sym_raw_string;
	v->a[80745] = sym_word;
	v->a[80746] = state(701);
	v->a[80747] = 2;
	v->a[80748] = sym_concatenation;
	v->a[80749] = aux_sym_for_statement_repeat1;
	v->a[80750] = state(936);
	v->a[80751] = 6;
	v->a[80752] = sym_arithmetic_expansion;
	v->a[80753] = sym_string;
	v->a[80754] = sym_number;
	v->a[80755] = sym_simple_expansion;
	v->a[80756] = sym_expansion;
	v->a[80757] = sym_command_substitution;
	v->a[80758] = 12;
	v->a[80759] = actions(3);
	small_parse_table_4038(v);
}

void	small_parse_table_4038(t_small_parse_table_array *v)
{
	v->a[80760] = 1;
	v->a[80761] = sym_comment;
	v->a[80762] = actions(761);
	v->a[80763] = 1;
	v->a[80764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80765] = actions(765);
	v->a[80766] = 1;
	v->a[80767] = anon_sym_DQUOTE;
	v->a[80768] = actions(767);
	v->a[80769] = 1;
	v->a[80770] = aux_sym_number_token1;
	v->a[80771] = actions(769);
	v->a[80772] = 1;
	v->a[80773] = aux_sym_number_token2;
	v->a[80774] = actions(771);
	v->a[80775] = 1;
	v->a[80776] = anon_sym_DOLLAR_LBRACE;
	v->a[80777] = actions(773);
	v->a[80778] = 1;
	v->a[80779] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4039(v);
}

void	small_parse_table_4039(t_small_parse_table_array *v)
{
	v->a[80780] = actions(775);
	v->a[80781] = 1;
	v->a[80782] = anon_sym_BQUOTE;
	v->a[80783] = actions(3126);
	v->a[80784] = 1;
	v->a[80785] = sym__bare_dollar;
	v->a[80786] = actions(3340);
	v->a[80787] = 1;
	v->a[80788] = anon_sym_DOLLAR;
	v->a[80789] = actions(3122);
	v->a[80790] = 3;
	v->a[80791] = sym_raw_string;
	v->a[80792] = sym__comment_word;
	v->a[80793] = sym_word;
	v->a[80794] = state(657);
	v->a[80795] = 6;
	v->a[80796] = sym_arithmetic_expansion;
	v->a[80797] = sym_string;
	v->a[80798] = sym_number;
	v->a[80799] = sym_simple_expansion;
	small_parse_table_4040(v);
}

/* EOF small_parse_table_807.c */
