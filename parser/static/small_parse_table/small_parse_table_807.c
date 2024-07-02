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
	v->a[80700] = 1;
	v->a[80701] = aux_sym_heredoc_redirect_token1;
	v->a[80702] = actions(3610);
	v->a[80703] = 1;
	v->a[80704] = anon_sym_in;
	v->a[80705] = state(1922);
	v->a[80706] = 1;
	v->a[80707] = sym_terminator;
	v->a[80708] = actions(1966);
	v->a[80709] = 3;
	v->a[80710] = anon_sym_SEMI_SEMI;
	v->a[80711] = anon_sym_AMP;
	v->a[80712] = anon_sym_SEMI;
	v->a[80713] = 6;
	v->a[80714] = actions(680);
	v->a[80715] = 1;
	v->a[80716] = sym_comment;
	v->a[80717] = actions(3598);
	v->a[80718] = 1;
	v->a[80719] = anon_sym_elif;
	small_parse_table_4036(v);
}

void	small_parse_table_4036(t_small_parse_table_array *v)
{
	v->a[80720] = actions(3600);
	v->a[80721] = 1;
	v->a[80722] = anon_sym_else;
	v->a[80723] = actions(3612);
	v->a[80724] = 1;
	v->a[80725] = anon_sym_fi;
	v->a[80726] = state(1945);
	v->a[80727] = 1;
	v->a[80728] = sym_else_clause;
	v->a[80729] = state(1847);
	v->a[80730] = 2;
	v->a[80731] = sym_elif_clause;
	v->a[80732] = aux_sym_if_statement_repeat1;
	v->a[80733] = 5;
	v->a[80734] = actions(3);
	v->a[80735] = 1;
	v->a[80736] = sym_comment;
	v->a[80737] = actions(3471);
	v->a[80738] = 1;
	v->a[80739] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4037(v);
}

void	small_parse_table_4037(t_small_parse_table_array *v)
{
	v->a[80740] = actions(3614);
	v->a[80741] = 1;
	v->a[80742] = anon_sym_in;
	v->a[80743] = state(1923);
	v->a[80744] = 1;
	v->a[80745] = sym_terminator;
	v->a[80746] = actions(1966);
	v->a[80747] = 3;
	v->a[80748] = anon_sym_SEMI_SEMI;
	v->a[80749] = anon_sym_AMP;
	v->a[80750] = anon_sym_SEMI;
	v->a[80751] = 3;
	v->a[80752] = actions(680);
	v->a[80753] = 1;
	v->a[80754] = sym_comment;
	v->a[80755] = actions(837);
	v->a[80756] = 1;
	v->a[80757] = anon_sym_DOLLAR;
	v->a[80758] = actions(839);
	v->a[80759] = 5;
	small_parse_table_4038(v);
}

void	small_parse_table_4038(t_small_parse_table_array *v)
{
	v->a[80760] = sym_heredoc_content;
	v->a[80761] = sym_heredoc_end;
	v->a[80762] = anon_sym_DOLLAR_LBRACE;
	v->a[80763] = anon_sym_DOLLAR_LPAREN;
	v->a[80764] = anon_sym_BQUOTE;
	v->a[80765] = 6;
	v->a[80766] = actions(680);
	v->a[80767] = 1;
	v->a[80768] = sym_comment;
	v->a[80769] = actions(3598);
	v->a[80770] = 1;
	v->a[80771] = anon_sym_elif;
	v->a[80772] = actions(3600);
	v->a[80773] = 1;
	v->a[80774] = anon_sym_else;
	v->a[80775] = actions(3616);
	v->a[80776] = 1;
	v->a[80777] = anon_sym_fi;
	v->a[80778] = state(2134);
	v->a[80779] = 1;
	small_parse_table_4039(v);
}

void	small_parse_table_4039(t_small_parse_table_array *v)
{
	v->a[80780] = sym_else_clause;
	v->a[80781] = state(1847);
	v->a[80782] = 2;
	v->a[80783] = sym_elif_clause;
	v->a[80784] = aux_sym_if_statement_repeat1;
	v->a[80785] = 5;
	v->a[80786] = actions(3);
	v->a[80787] = 1;
	v->a[80788] = sym_comment;
	v->a[80789] = actions(3471);
	v->a[80790] = 1;
	v->a[80791] = aux_sym_heredoc_redirect_token1;
	v->a[80792] = actions(3481);
	v->a[80793] = 1;
	v->a[80794] = anon_sym_in;
	v->a[80795] = state(1937);
	v->a[80796] = 1;
	v->a[80797] = sym_terminator;
	v->a[80798] = actions(1966);
	v->a[80799] = 3;
	small_parse_table_4040(v);
}

/* EOF small_parse_table_807.c */
