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
	v->a[73700] = anon_sym_DASH;
	v->a[73701] = anon_sym_STAR;
	v->a[73702] = anon_sym_QMARK;
	v->a[73703] = anon_sym_DOLLAR;
	v->a[73704] = anon_sym_POUND;
	v->a[73705] = anon_sym_AT;
	v->a[73706] = anon_sym_0;
	v->a[73707] = anon_sym__;
	v->a[73708] = 6;
	v->a[73709] = actions(3);
	v->a[73710] = 1;
	v->a[73711] = sym_comment;
	v->a[73712] = actions(2852);
	v->a[73713] = 1;
	v->a[73714] = sym_string_content;
	v->a[73715] = actions(2856);
	v->a[73716] = 1;
	v->a[73717] = sym_variable_name;
	v->a[73718] = actions(2959);
	v->a[73719] = 1;
	small_parse_table_3686(v);
}

void	small_parse_table_3686(t_small_parse_table_array *v)
{
	v->a[73720] = anon_sym_DQUOTE;
	v->a[73721] = actions(2854);
	v->a[73722] = 2;
	v->a[73723] = aux_sym__simple_variable_name_token1;
	v->a[73724] = aux_sym__multiline_variable_name_token1;
	v->a[73725] = actions(2848);
	v->a[73726] = 9;
	v->a[73727] = anon_sym_BANG;
	v->a[73728] = anon_sym_DASH;
	v->a[73729] = anon_sym_STAR;
	v->a[73730] = anon_sym_QMARK;
	v->a[73731] = anon_sym_DOLLAR;
	v->a[73732] = anon_sym_POUND;
	v->a[73733] = anon_sym_AT;
	v->a[73734] = anon_sym_0;
	v->a[73735] = anon_sym__;
	v->a[73736] = 5;
	v->a[73737] = actions(664);
	v->a[73738] = 1;
	v->a[73739] = sym_comment;
	small_parse_table_3687(v);
}

void	small_parse_table_3687(t_small_parse_table_array *v)
{
	v->a[73740] = actions(2961);
	v->a[73741] = 1;
	v->a[73742] = anon_sym_PIPE;
	v->a[73743] = state(1484);
	v->a[73744] = 1;
	v->a[73745] = aux_sym_pipeline_repeat1;
	v->a[73746] = actions(2273);
	v->a[73747] = 3;
	v->a[73748] = anon_sym_LT;
	v->a[73749] = anon_sym_GT;
	v->a[73750] = anon_sym_LT_LT;
	v->a[73751] = actions(2269);
	v->a[73752] = 9;
	v->a[73753] = sym_file_descriptor;
	v->a[73754] = anon_sym_AMP_AMP;
	v->a[73755] = anon_sym_PIPE_PIPE;
	v->a[73756] = anon_sym_GT_GT;
	v->a[73757] = anon_sym_LT_AMP;
	v->a[73758] = anon_sym_GT_AMP;
	v->a[73759] = anon_sym_GT_PIPE;
	small_parse_table_3688(v);
}

void	small_parse_table_3688(t_small_parse_table_array *v)
{
	v->a[73760] = anon_sym_LT_GT;
	v->a[73761] = anon_sym_LT_LT_DASH;
	v->a[73762] = 7;
	v->a[73763] = actions(3);
	v->a[73764] = 1;
	v->a[73765] = sym_comment;
	v->a[73766] = actions(1086);
	v->a[73767] = 1;
	v->a[73768] = sym_file_descriptor;
	v->a[73769] = actions(2963);
	v->a[73770] = 1;
	v->a[73771] = aux_sym_heredoc_redirect_token1;
	v->a[73772] = state(2040);
	v->a[73773] = 1;
	v->a[73774] = sym__heredoc_expression;
	v->a[73775] = actions(1068);
	v->a[73776] = 2;
	v->a[73777] = anon_sym_AMP_AMP;
	v->a[73778] = anon_sym_PIPE_PIPE;
	v->a[73779] = state(1600);
	small_parse_table_3689(v);
}

void	small_parse_table_3689(t_small_parse_table_array *v)
{
	v->a[73780] = 2;
	v->a[73781] = sym_file_redirect;
	v->a[73782] = aux_sym_redirected_statement_repeat2;
	v->a[73783] = actions(1070);
	v->a[73784] = 7;
	v->a[73785] = anon_sym_LT;
	v->a[73786] = anon_sym_GT;
	v->a[73787] = anon_sym_GT_GT;
	v->a[73788] = anon_sym_LT_AMP;
	v->a[73789] = anon_sym_GT_AMP;
	v->a[73790] = anon_sym_GT_PIPE;
	v->a[73791] = anon_sym_LT_GT;
	v->a[73792] = 6;
	v->a[73793] = actions(3);
	v->a[73794] = 1;
	v->a[73795] = sym_comment;
	v->a[73796] = actions(2852);
	v->a[73797] = 1;
	v->a[73798] = sym_string_content;
	v->a[73799] = actions(2856);
	small_parse_table_3690(v);
}

/* EOF small_parse_table_737.c */
