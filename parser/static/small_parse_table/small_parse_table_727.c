/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_727.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3635(t_small_parse_table_array *v)
{
	v->a[72700] = anon_sym_POUND;
	v->a[72701] = anon_sym_AT;
	v->a[72702] = anon_sym_0;
	v->a[72703] = anon_sym__;
	v->a[72704] = 6;
	v->a[72705] = actions(3);
	v->a[72706] = 1;
	v->a[72707] = sym_comment;
	v->a[72708] = actions(2852);
	v->a[72709] = 1;
	v->a[72710] = sym_string_content;
	v->a[72711] = actions(2856);
	v->a[72712] = 1;
	v->a[72713] = sym_variable_name;
	v->a[72714] = actions(2890);
	v->a[72715] = 1;
	v->a[72716] = anon_sym_DQUOTE;
	v->a[72717] = actions(2854);
	v->a[72718] = 2;
	v->a[72719] = aux_sym__simple_variable_name_token1;
	small_parse_table_3636(v);
}

void	small_parse_table_3636(t_small_parse_table_array *v)
{
	v->a[72720] = aux_sym__multiline_variable_name_token1;
	v->a[72721] = actions(2848);
	v->a[72722] = 9;
	v->a[72723] = anon_sym_BANG;
	v->a[72724] = anon_sym_DASH;
	v->a[72725] = anon_sym_STAR;
	v->a[72726] = anon_sym_QMARK;
	v->a[72727] = anon_sym_DOLLAR;
	v->a[72728] = anon_sym_POUND;
	v->a[72729] = anon_sym_AT;
	v->a[72730] = anon_sym_0;
	v->a[72731] = anon_sym__;
	v->a[72732] = 7;
	v->a[72733] = actions(3);
	v->a[72734] = 1;
	v->a[72735] = sym_comment;
	v->a[72736] = actions(1086);
	v->a[72737] = 1;
	v->a[72738] = sym_file_descriptor;
	v->a[72739] = actions(2892);
	small_parse_table_3637(v);
}

void	small_parse_table_3637(t_small_parse_table_array *v)
{
	v->a[72740] = 1;
	v->a[72741] = aux_sym_heredoc_redirect_token1;
	v->a[72742] = state(2066);
	v->a[72743] = 1;
	v->a[72744] = sym__heredoc_expression;
	v->a[72745] = actions(1068);
	v->a[72746] = 2;
	v->a[72747] = anon_sym_AMP_AMP;
	v->a[72748] = anon_sym_PIPE_PIPE;
	v->a[72749] = state(1600);
	v->a[72750] = 2;
	v->a[72751] = sym_file_redirect;
	v->a[72752] = aux_sym_redirected_statement_repeat2;
	v->a[72753] = actions(1070);
	v->a[72754] = 7;
	v->a[72755] = anon_sym_LT;
	v->a[72756] = anon_sym_GT;
	v->a[72757] = anon_sym_GT_GT;
	v->a[72758] = anon_sym_LT_AMP;
	v->a[72759] = anon_sym_GT_AMP;
	small_parse_table_3638(v);
}

void	small_parse_table_3638(t_small_parse_table_array *v)
{
	v->a[72760] = anon_sym_GT_PIPE;
	v->a[72761] = anon_sym_LT_GT;
	v->a[72762] = 6;
	v->a[72763] = actions(3);
	v->a[72764] = 1;
	v->a[72765] = sym_comment;
	v->a[72766] = actions(2852);
	v->a[72767] = 1;
	v->a[72768] = sym_string_content;
	v->a[72769] = actions(2856);
	v->a[72770] = 1;
	v->a[72771] = sym_variable_name;
	v->a[72772] = actions(2894);
	v->a[72773] = 1;
	v->a[72774] = anon_sym_DQUOTE;
	v->a[72775] = actions(2854);
	v->a[72776] = 2;
	v->a[72777] = aux_sym__simple_variable_name_token1;
	v->a[72778] = aux_sym__multiline_variable_name_token1;
	v->a[72779] = actions(2848);
	small_parse_table_3639(v);
}

void	small_parse_table_3639(t_small_parse_table_array *v)
{
	v->a[72780] = 9;
	v->a[72781] = anon_sym_BANG;
	v->a[72782] = anon_sym_DASH;
	v->a[72783] = anon_sym_STAR;
	v->a[72784] = anon_sym_QMARK;
	v->a[72785] = anon_sym_DOLLAR;
	v->a[72786] = anon_sym_POUND;
	v->a[72787] = anon_sym_AT;
	v->a[72788] = anon_sym_0;
	v->a[72789] = anon_sym__;
	v->a[72790] = 6;
	v->a[72791] = actions(3);
	v->a[72792] = 1;
	v->a[72793] = sym_comment;
	v->a[72794] = actions(2852);
	v->a[72795] = 1;
	v->a[72796] = sym_string_content;
	v->a[72797] = actions(2856);
	v->a[72798] = 1;
	v->a[72799] = sym_variable_name;
	small_parse_table_3640(v);
}

/* EOF small_parse_table_727.c */
