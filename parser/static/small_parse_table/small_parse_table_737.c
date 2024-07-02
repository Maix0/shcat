/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_737.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3685(t_small_parse_table_array *v)
{
	v->a[73700] = anon_sym_DQUOTE;
	v->a[73701] = actions(2883);
	v->a[73702] = 2;
	v->a[73703] = aux_sym__simple_variable_name_token1;
	v->a[73704] = aux_sym__multiline_variable_name_token1;
	v->a[73705] = actions(2877);
	v->a[73706] = 9;
	v->a[73707] = anon_sym_BANG;
	v->a[73708] = anon_sym_DASH;
	v->a[73709] = anon_sym_STAR;
	v->a[73710] = anon_sym_QMARK;
	v->a[73711] = anon_sym_DOLLAR;
	v->a[73712] = anon_sym_POUND;
	v->a[73713] = anon_sym_AT;
	v->a[73714] = anon_sym_0;
	v->a[73715] = anon_sym__;
	v->a[73716] = 6;
	v->a[73717] = actions(3);
	v->a[73718] = 1;
	v->a[73719] = sym_comment;
	small_parse_table_3686(v);
}

void	small_parse_table_3686(t_small_parse_table_array *v)
{
	v->a[73720] = actions(2881);
	v->a[73721] = 1;
	v->a[73722] = sym_string_content;
	v->a[73723] = actions(2885);
	v->a[73724] = 1;
	v->a[73725] = sym_variable_name;
	v->a[73726] = actions(2980);
	v->a[73727] = 1;
	v->a[73728] = anon_sym_DQUOTE;
	v->a[73729] = actions(2883);
	v->a[73730] = 2;
	v->a[73731] = aux_sym__simple_variable_name_token1;
	v->a[73732] = aux_sym__multiline_variable_name_token1;
	v->a[73733] = actions(2877);
	v->a[73734] = 9;
	v->a[73735] = anon_sym_BANG;
	v->a[73736] = anon_sym_DASH;
	v->a[73737] = anon_sym_STAR;
	v->a[73738] = anon_sym_QMARK;
	v->a[73739] = anon_sym_DOLLAR;
	small_parse_table_3687(v);
}

void	small_parse_table_3687(t_small_parse_table_array *v)
{
	v->a[73740] = anon_sym_POUND;
	v->a[73741] = anon_sym_AT;
	v->a[73742] = anon_sym_0;
	v->a[73743] = anon_sym__;
	v->a[73744] = 6;
	v->a[73745] = actions(3);
	v->a[73746] = 1;
	v->a[73747] = sym_comment;
	v->a[73748] = actions(2881);
	v->a[73749] = 1;
	v->a[73750] = sym_string_content;
	v->a[73751] = actions(2885);
	v->a[73752] = 1;
	v->a[73753] = sym_variable_name;
	v->a[73754] = actions(2982);
	v->a[73755] = 1;
	v->a[73756] = anon_sym_DQUOTE;
	v->a[73757] = actions(2883);
	v->a[73758] = 2;
	v->a[73759] = aux_sym__simple_variable_name_token1;
	small_parse_table_3688(v);
}

void	small_parse_table_3688(t_small_parse_table_array *v)
{
	v->a[73760] = aux_sym__multiline_variable_name_token1;
	v->a[73761] = actions(2877);
	v->a[73762] = 9;
	v->a[73763] = anon_sym_BANG;
	v->a[73764] = anon_sym_DASH;
	v->a[73765] = anon_sym_STAR;
	v->a[73766] = anon_sym_QMARK;
	v->a[73767] = anon_sym_DOLLAR;
	v->a[73768] = anon_sym_POUND;
	v->a[73769] = anon_sym_AT;
	v->a[73770] = anon_sym_0;
	v->a[73771] = anon_sym__;
	v->a[73772] = 7;
	v->a[73773] = actions(3);
	v->a[73774] = 1;
	v->a[73775] = sym_comment;
	v->a[73776] = actions(1079);
	v->a[73777] = 1;
	v->a[73778] = sym_file_descriptor;
	v->a[73779] = actions(2984);
	small_parse_table_3689(v);
}

void	small_parse_table_3689(t_small_parse_table_array *v)
{
	v->a[73780] = 1;
	v->a[73781] = aux_sym_heredoc_redirect_token1;
	v->a[73782] = state(2116);
	v->a[73783] = 1;
	v->a[73784] = sym__heredoc_expression;
	v->a[73785] = actions(1061);
	v->a[73786] = 2;
	v->a[73787] = anon_sym_AMP_AMP;
	v->a[73788] = anon_sym_PIPE_PIPE;
	v->a[73789] = state(1581);
	v->a[73790] = 2;
	v->a[73791] = sym_file_redirect;
	v->a[73792] = aux_sym_redirected_statement_repeat2;
	v->a[73793] = actions(1063);
	v->a[73794] = 7;
	v->a[73795] = anon_sym_LT;
	v->a[73796] = anon_sym_GT;
	v->a[73797] = anon_sym_GT_GT;
	v->a[73798] = anon_sym_LT_AMP;
	v->a[73799] = anon_sym_GT_AMP;
	small_parse_table_3690(v);
}

/* EOF small_parse_table_737.c */
