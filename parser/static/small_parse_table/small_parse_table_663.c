/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_663.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3315(t_small_parse_table_array *v)
{
	v->a[66300] = actions(766);
	v->a[66301] = 1;
	v->a[66302] = anon_sym_PIPE;
	v->a[66303] = actions(2066);
	v->a[66304] = 1;
	v->a[66305] = sym_file_descriptor;
	v->a[66306] = actions(2137);
	v->a[66307] = 1;
	v->a[66308] = aux_sym_heredoc_redirect_token1;
	v->a[66309] = state(783);
	v->a[66310] = 1;
	v->a[66311] = sym_terminator;
	v->a[66312] = actions(804);
	v->a[66313] = 2;
	v->a[66314] = anon_sym_LT_LT;
	v->a[66315] = anon_sym_LT_LT_DASH;
	v->a[66316] = actions(893);
	v->a[66317] = 2;
	v->a[66318] = anon_sym_AMP_AMP;
	v->a[66319] = anon_sym_PIPE_PIPE;
	small_parse_table_3316(v);
}

void	small_parse_table_3316(t_small_parse_table_array *v)
{
	v->a[66320] = actions(2064);
	v->a[66321] = 2;
	v->a[66322] = anon_sym_LT_AMP_DASH;
	v->a[66323] = anon_sym_GT_AMP_DASH;
	v->a[66324] = actions(898);
	v->a[66325] = 3;
	v->a[66326] = anon_sym_SEMI_SEMI;
	v->a[66327] = anon_sym_AMP;
	v->a[66328] = anon_sym_SEMI;
	v->a[66329] = state(1256);
	v->a[66330] = 3;
	v->a[66331] = sym_file_redirect;
	v->a[66332] = sym_heredoc_redirect;
	v->a[66333] = aux_sym_redirected_statement_repeat1;
	v->a[66334] = actions(2062);
	v->a[66335] = 8;
	v->a[66336] = anon_sym_LT;
	v->a[66337] = anon_sym_GT;
	v->a[66338] = anon_sym_GT_GT;
	v->a[66339] = anon_sym_AMP_GT;
	small_parse_table_3317(v);
}

void	small_parse_table_3317(t_small_parse_table_array *v)
{
	v->a[66340] = anon_sym_AMP_GT_GT;
	v->a[66341] = anon_sym_LT_AMP;
	v->a[66342] = anon_sym_GT_AMP;
	v->a[66343] = anon_sym_GT_PIPE;
	v->a[66344] = 5;
	v->a[66345] = actions(3);
	v->a[66346] = 1;
	v->a[66347] = sym_comment;
	v->a[66348] = actions(2139);
	v->a[66349] = 1;
	v->a[66350] = sym_variable_name;
	v->a[66351] = actions(2131);
	v->a[66352] = 2;
	v->a[66353] = sym_file_descriptor;
	v->a[66354] = aux_sym_heredoc_redirect_token1;
	v->a[66355] = state(1099);
	v->a[66356] = 2;
	v->a[66357] = sym_variable_assignment;
	v->a[66358] = aux_sym__variable_assignments_repeat1;
	v->a[66359] = actions(2133);
	small_parse_table_3318(v);
}

void	small_parse_table_3318(t_small_parse_table_array *v)
{
	v->a[66360] = 19;
	v->a[66361] = anon_sym_esac;
	v->a[66362] = anon_sym_PIPE;
	v->a[66363] = anon_sym_SEMI_SEMI;
	v->a[66364] = anon_sym_AMP_AMP;
	v->a[66365] = anon_sym_PIPE_PIPE;
	v->a[66366] = anon_sym_LT;
	v->a[66367] = anon_sym_GT;
	v->a[66368] = anon_sym_GT_GT;
	v->a[66369] = anon_sym_AMP_GT;
	v->a[66370] = anon_sym_AMP_GT_GT;
	v->a[66371] = anon_sym_LT_AMP;
	v->a[66372] = anon_sym_GT_AMP;
	v->a[66373] = anon_sym_GT_PIPE;
	v->a[66374] = anon_sym_LT_AMP_DASH;
	v->a[66375] = anon_sym_GT_AMP_DASH;
	v->a[66376] = anon_sym_LT_LT;
	v->a[66377] = anon_sym_LT_LT_DASH;
	v->a[66378] = anon_sym_AMP;
	v->a[66379] = anon_sym_SEMI;
	small_parse_table_3319(v);
}

void	small_parse_table_3319(t_small_parse_table_array *v)
{
	v->a[66380] = 8;
	v->a[66381] = actions(3);
	v->a[66382] = 1;
	v->a[66383] = sym_comment;
	v->a[66384] = actions(2043);
	v->a[66385] = 1;
	v->a[66386] = sym_file_descriptor;
	v->a[66387] = actions(2121);
	v->a[66388] = 1;
	v->a[66389] = aux_sym_heredoc_redirect_token1;
	v->a[66390] = actions(804);
	v->a[66391] = 2;
	v->a[66392] = anon_sym_LT_LT;
	v->a[66393] = anon_sym_LT_LT_DASH;
	v->a[66394] = actions(2041);
	v->a[66395] = 2;
	v->a[66396] = anon_sym_LT_AMP_DASH;
	v->a[66397] = anon_sym_GT_AMP_DASH;
	v->a[66398] = state(1116);
	v->a[66399] = 3;
	small_parse_table_3320(v);
}

/* EOF small_parse_table_663.c */
