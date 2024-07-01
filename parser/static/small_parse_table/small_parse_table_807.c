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
	v->a[80700] = 3;
	v->a[80701] = anon_sym_SEMI_SEMI;
	v->a[80702] = anon_sym_AMP;
	v->a[80703] = anon_sym_SEMI;
	v->a[80704] = 5;
	v->a[80705] = actions(3);
	v->a[80706] = 1;
	v->a[80707] = sym_comment;
	v->a[80708] = actions(3440);
	v->a[80709] = 1;
	v->a[80710] = anon_sym_in;
	v->a[80711] = actions(3442);
	v->a[80712] = 1;
	v->a[80713] = aux_sym_heredoc_redirect_token1;
	v->a[80714] = state(2106);
	v->a[80715] = 1;
	v->a[80716] = sym_terminator;
	v->a[80717] = actions(1893);
	v->a[80718] = 3;
	v->a[80719] = anon_sym_SEMI_SEMI;
	small_parse_table_4036(v);
}

void	small_parse_table_4036(t_small_parse_table_array *v)
{
	v->a[80720] = anon_sym_AMP;
	v->a[80721] = anon_sym_SEMI;
	v->a[80722] = 6;
	v->a[80723] = actions(664);
	v->a[80724] = 1;
	v->a[80725] = sym_comment;
	v->a[80726] = actions(3583);
	v->a[80727] = 1;
	v->a[80728] = anon_sym_PIPE;
	v->a[80729] = actions(3605);
	v->a[80730] = 1;
	v->a[80731] = anon_sym_RPAREN;
	v->a[80732] = state(1837);
	v->a[80733] = 1;
	v->a[80734] = aux_sym_concatenation_repeat1;
	v->a[80735] = state(1868);
	v->a[80736] = 1;
	v->a[80737] = aux_sym__case_item_last_repeat1;
	v->a[80738] = actions(3587);
	v->a[80739] = 2;
	small_parse_table_4037(v);
}

void	small_parse_table_4037(t_small_parse_table_array *v)
{
	v->a[80740] = sym__concat;
	v->a[80741] = aux_sym_concatenation_token1;
	v->a[80742] = 6;
	v->a[80743] = actions(664);
	v->a[80744] = 1;
	v->a[80745] = sym_comment;
	v->a[80746] = actions(3583);
	v->a[80747] = 1;
	v->a[80748] = anon_sym_PIPE;
	v->a[80749] = actions(3607);
	v->a[80750] = 1;
	v->a[80751] = anon_sym_RPAREN;
	v->a[80752] = state(1837);
	v->a[80753] = 1;
	v->a[80754] = aux_sym_concatenation_repeat1;
	v->a[80755] = state(1876);
	v->a[80756] = 1;
	v->a[80757] = aux_sym__case_item_last_repeat1;
	v->a[80758] = actions(3587);
	v->a[80759] = 2;
	small_parse_table_4038(v);
}

void	small_parse_table_4038(t_small_parse_table_array *v)
{
	v->a[80760] = sym__concat;
	v->a[80761] = aux_sym_concatenation_token1;
	v->a[80762] = 3;
	v->a[80763] = actions(3);
	v->a[80764] = 1;
	v->a[80765] = sym_comment;
	v->a[80766] = actions(846);
	v->a[80767] = 2;
	v->a[80768] = sym_regex;
	v->a[80769] = aux_sym_expansion_regex_token1;
	v->a[80770] = actions(844);
	v->a[80771] = 4;
	v->a[80772] = anon_sym_RPAREN;
	v->a[80773] = anon_sym_RBRACE;
	v->a[80774] = anon_sym_DQUOTE;
	v->a[80775] = sym_raw_string;
	v->a[80776] = 6;
	v->a[80777] = actions(664);
	v->a[80778] = 1;
	v->a[80779] = sym_comment;
	small_parse_table_4039(v);
}

void	small_parse_table_4039(t_small_parse_table_array *v)
{
	v->a[80780] = actions(3579);
	v->a[80781] = 1;
	v->a[80782] = anon_sym_elif;
	v->a[80783] = actions(3581);
	v->a[80784] = 1;
	v->a[80785] = anon_sym_else;
	v->a[80786] = actions(3609);
	v->a[80787] = 1;
	v->a[80788] = anon_sym_fi;
	v->a[80789] = state(2085);
	v->a[80790] = 1;
	v->a[80791] = sym_else_clause;
	v->a[80792] = state(1818);
	v->a[80793] = 2;
	v->a[80794] = sym_elif_clause;
	v->a[80795] = aux_sym_if_statement_repeat1;
	v->a[80796] = 2;
	v->a[80797] = actions(664);
	v->a[80798] = 1;
	v->a[80799] = sym_comment;
	small_parse_table_4040(v);
}

/* EOF small_parse_table_807.c */
