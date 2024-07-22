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
	v->a[80700] = state(1185);
	v->a[80701] = 1;
	v->a[80702] = sym__heredoc_body;
	v->a[80703] = state(1186);
	v->a[80704] = 1;
	v->a[80705] = sym__simple_heredoc_body;
	v->a[80706] = state(2113);
	v->a[80707] = 1;
	v->a[80708] = sym_heredoc_body;
	v->a[80709] = 6;
	v->a[80710] = actions(501);
	v->a[80711] = 1;
	v->a[80712] = sym_comment;
	v->a[80713] = actions(3630);
	v->a[80714] = 1;
	v->a[80715] = sym__heredoc_body_beginning;
	v->a[80716] = actions(3645);
	v->a[80717] = 1;
	v->a[80718] = sym_simple_heredoc_body;
	v->a[80719] = state(1312);
	small_parse_table_4036(v);
}

void	small_parse_table_4036(t_small_parse_table_array *v)
{
	v->a[80720] = 1;
	v->a[80721] = sym__heredoc_body;
	v->a[80722] = state(1314);
	v->a[80723] = 1;
	v->a[80724] = sym__simple_heredoc_body;
	v->a[80725] = state(1937);
	v->a[80726] = 1;
	v->a[80727] = sym_heredoc_body;
	v->a[80728] = 2;
	v->a[80729] = actions(501);
	v->a[80730] = 1;
	v->a[80731] = sym_comment;
	v->a[80732] = actions(682);
	v->a[80733] = 5;
	v->a[80734] = sym__concat;
	v->a[80735] = anon_sym_PIPE;
	v->a[80736] = anon_sym_RPAREN;
	v->a[80737] = anon_sym_RBRACE;
	v->a[80738] = aux_sym_concatenation_token1;
	v->a[80739] = 2;
	small_parse_table_4037(v);
}

void	small_parse_table_4037(t_small_parse_table_array *v)
{
	v->a[80740] = actions(501);
	v->a[80741] = 1;
	v->a[80742] = sym_comment;
	v->a[80743] = actions(686);
	v->a[80744] = 5;
	v->a[80745] = sym__concat;
	v->a[80746] = anon_sym_PIPE;
	v->a[80747] = anon_sym_RPAREN;
	v->a[80748] = anon_sym_RBRACE;
	v->a[80749] = aux_sym_concatenation_token1;
	v->a[80750] = 6;
	v->a[80751] = actions(501);
	v->a[80752] = 1;
	v->a[80753] = sym_comment;
	v->a[80754] = actions(3630);
	v->a[80755] = 1;
	v->a[80756] = sym__heredoc_body_beginning;
	v->a[80757] = actions(3645);
	v->a[80758] = 1;
	v->a[80759] = sym_simple_heredoc_body;
	small_parse_table_4038(v);
}

void	small_parse_table_4038(t_small_parse_table_array *v)
{
	v->a[80760] = state(1315);
	v->a[80761] = 1;
	v->a[80762] = sym__heredoc_body;
	v->a[80763] = state(1317);
	v->a[80764] = 1;
	v->a[80765] = sym__simple_heredoc_body;
	v->a[80766] = state(1937);
	v->a[80767] = 1;
	v->a[80768] = sym_heredoc_body;
	v->a[80769] = 5;
	v->a[80770] = actions(501);
	v->a[80771] = 1;
	v->a[80772] = sym_comment;
	v->a[80773] = actions(3628);
	v->a[80774] = 1;
	v->a[80775] = sym_simple_heredoc_body;
	v->a[80776] = actions(3630);
	v->a[80777] = 1;
	v->a[80778] = sym__heredoc_body_beginning;
	v->a[80779] = state(2113);
	small_parse_table_4039(v);
}

void	small_parse_table_4039(t_small_parse_table_array *v)
{
	v->a[80780] = 1;
	v->a[80781] = sym_heredoc_body;
	v->a[80782] = state(1188);
	v->a[80783] = 2;
	v->a[80784] = sym__heredoc_body;
	v->a[80785] = sym__simple_heredoc_body;
	v->a[80786] = 5;
	v->a[80787] = actions(501);
	v->a[80788] = 1;
	v->a[80789] = sym_comment;
	v->a[80790] = actions(3630);
	v->a[80791] = 1;
	v->a[80792] = sym__heredoc_body_beginning;
	v->a[80793] = actions(3645);
	v->a[80794] = 1;
	v->a[80795] = sym_simple_heredoc_body;
	v->a[80796] = state(1937);
	v->a[80797] = 1;
	v->a[80798] = sym_heredoc_body;
	v->a[80799] = state(1354);
	small_parse_table_4040(v);
}

/* EOF small_parse_table_807.c */
