/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_597.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2985(t_small_parse_table_array *v)
{
	v->a[59700] = anon_sym_PIPE_PIPE;
	v->a[59701] = anon_sym_LT;
	v->a[59702] = anon_sym_GT;
	v->a[59703] = anon_sym_GT_GT;
	v->a[59704] = anon_sym_LT_AMP;
	v->a[59705] = anon_sym_GT_AMP;
	v->a[59706] = anon_sym_GT_PIPE;
	v->a[59707] = anon_sym_LT_AMP_DASH;
	v->a[59708] = anon_sym_GT_AMP_DASH;
	v->a[59709] = aux_sym_heredoc_redirect_token1;
	v->a[59710] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59711] = aux_sym_concatenation_token1;
	v->a[59712] = anon_sym_DOLLAR;
	v->a[59713] = anon_sym_DQUOTE;
	v->a[59714] = sym_raw_string;
	v->a[59715] = sym_number;
	v->a[59716] = anon_sym_DOLLAR_LBRACE;
	v->a[59717] = anon_sym_DOLLAR_LPAREN;
	v->a[59718] = anon_sym_BQUOTE;
	v->a[59719] = sym_word;
	small_parse_table_2986(v);
}

void	small_parse_table_2986(t_small_parse_table_array *v)
{
	v->a[59720] = 12;
	v->a[59721] = actions(3);
	v->a[59722] = 1;
	v->a[59723] = sym_comment;
	v->a[59724] = actions(682);
	v->a[59725] = 1;
	v->a[59726] = anon_sym_PIPE;
	v->a[59727] = actions(2017);
	v->a[59728] = 1;
	v->a[59729] = aux_sym_heredoc_redirect_token1;
	v->a[59730] = actions(2019);
	v->a[59731] = 1;
	v->a[59732] = sym_file_descriptor;
	v->a[59733] = state(700);
	v->a[59734] = 1;
	v->a[59735] = sym_terminator;
	v->a[59736] = actions(684);
	v->a[59737] = 2;
	v->a[59738] = anon_sym_AMP_AMP;
	v->a[59739] = anon_sym_PIPE_PIPE;
	small_parse_table_2987(v);
}

void	small_parse_table_2987(t_small_parse_table_array *v)
{
	v->a[59740] = actions(686);
	v->a[59741] = 2;
	v->a[59742] = anon_sym_LT_LT;
	v->a[59743] = anon_sym_LT_LT_DASH;
	v->a[59744] = actions(688);
	v->a[59745] = 2;
	v->a[59746] = anon_sym_AMP;
	v->a[59747] = anon_sym_SEMI;
	v->a[59748] = actions(695);
	v->a[59749] = 2;
	v->a[59750] = anon_sym_esac;
	v->a[59751] = anon_sym_SEMI_SEMI;
	v->a[59752] = actions(2015);
	v->a[59753] = 2;
	v->a[59754] = anon_sym_LT_AMP_DASH;
	v->a[59755] = anon_sym_GT_AMP_DASH;
	v->a[59756] = state(1176);
	v->a[59757] = 3;
	v->a[59758] = sym_file_redirect;
	v->a[59759] = sym_heredoc_redirect;
	small_parse_table_2988(v);
}

void	small_parse_table_2988(t_small_parse_table_array *v)
{
	v->a[59760] = aux_sym_redirected_statement_repeat1;
	v->a[59761] = actions(2013);
	v->a[59762] = 6;
	v->a[59763] = anon_sym_LT;
	v->a[59764] = anon_sym_GT;
	v->a[59765] = anon_sym_GT_GT;
	v->a[59766] = anon_sym_LT_AMP;
	v->a[59767] = anon_sym_GT_AMP;
	v->a[59768] = anon_sym_GT_PIPE;
	v->a[59769] = 12;
	v->a[59770] = actions(3);
	v->a[59771] = 1;
	v->a[59772] = sym_comment;
	v->a[59773] = actions(682);
	v->a[59774] = 1;
	v->a[59775] = anon_sym_PIPE;
	v->a[59776] = actions(2017);
	v->a[59777] = 1;
	v->a[59778] = aux_sym_heredoc_redirect_token1;
	v->a[59779] = actions(2019);
	small_parse_table_2989(v);
}

void	small_parse_table_2989(t_small_parse_table_array *v)
{
	v->a[59780] = 1;
	v->a[59781] = sym_file_descriptor;
	v->a[59782] = state(694);
	v->a[59783] = 1;
	v->a[59784] = sym_terminator;
	v->a[59785] = actions(684);
	v->a[59786] = 2;
	v->a[59787] = anon_sym_AMP_AMP;
	v->a[59788] = anon_sym_PIPE_PIPE;
	v->a[59789] = actions(686);
	v->a[59790] = 2;
	v->a[59791] = anon_sym_LT_LT;
	v->a[59792] = anon_sym_LT_LT_DASH;
	v->a[59793] = actions(688);
	v->a[59794] = 2;
	v->a[59795] = anon_sym_AMP;
	v->a[59796] = anon_sym_SEMI;
	v->a[59797] = actions(695);
	v->a[59798] = 2;
	v->a[59799] = anon_sym_esac;
	small_parse_table_2990(v);
}

/* EOF small_parse_table_597.c */
