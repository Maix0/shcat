/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1083.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5415(t_small_parse_table_array *v)
{
	v->a[108300] = anon_sym_SEMI;
	v->a[108301] = 10;
	v->a[108302] = actions(3);
	v->a[108303] = 1;
	v->a[108304] = sym_comment;
	v->a[108305] = actions(2710);
	v->a[108306] = 1;
	v->a[108307] = aux_sym_heredoc_redirect_token1;
	v->a[108308] = actions(5243);
	v->a[108309] = 1;
	v->a[108310] = sym_file_descriptor;
	v->a[108311] = actions(2706);
	v->a[108312] = 2;
	v->a[108313] = anon_sym_AMP_AMP;
	v->a[108314] = anon_sym_PIPE_PIPE;
	v->a[108315] = actions(2708);
	v->a[108316] = 2;
	v->a[108317] = anon_sym_LT_LT;
	v->a[108318] = anon_sym_LT_LT_DASH;
	v->a[108319] = actions(2712);
	small_parse_table_5416(v);
}

void	small_parse_table_5416(t_small_parse_table_array *v)
{
	v->a[108320] = 2;
	v->a[108321] = anon_sym_AMP;
	v->a[108322] = anon_sym_SEMI;
	v->a[108323] = actions(5241);
	v->a[108324] = 2;
	v->a[108325] = anon_sym_LT_AMP_DASH;
	v->a[108326] = anon_sym_GT_AMP_DASH;
	v->a[108327] = actions(1995);
	v->a[108328] = 3;
	v->a[108329] = anon_sym_SEMI_SEMI;
	v->a[108330] = anon_sym_SEMI_AMP;
	v->a[108331] = anon_sym_SEMI_SEMI_AMP;
	v->a[108332] = state(1983);
	v->a[108333] = 3;
	v->a[108334] = sym_file_redirect;
	v->a[108335] = sym_heredoc_redirect;
	v->a[108336] = aux_sym_redirected_statement_repeat1;
	v->a[108337] = actions(5239);
	v->a[108338] = 8;
	v->a[108339] = anon_sym_LT;
	small_parse_table_5417(v);
}

void	small_parse_table_5417(t_small_parse_table_array *v)
{
	v->a[108340] = anon_sym_GT;
	v->a[108341] = anon_sym_GT_GT;
	v->a[108342] = anon_sym_AMP_GT;
	v->a[108343] = anon_sym_AMP_GT_GT;
	v->a[108344] = anon_sym_LT_AMP;
	v->a[108345] = anon_sym_GT_AMP;
	v->a[108346] = anon_sym_GT_PIPE;
	v->a[108347] = 3;
	v->a[108348] = actions(3);
	v->a[108349] = 1;
	v->a[108350] = sym_comment;
	v->a[108351] = actions(6137);
	v->a[108352] = 2;
	v->a[108353] = sym_file_descriptor;
	v->a[108354] = aux_sym_heredoc_redirect_token1;
	v->a[108355] = actions(6139);
	v->a[108356] = 22;
	v->a[108357] = anon_sym_esac;
	v->a[108358] = anon_sym_PIPE;
	v->a[108359] = anon_sym_SEMI_SEMI;
	small_parse_table_5418(v);
}

void	small_parse_table_5418(t_small_parse_table_array *v)
{
	v->a[108360] = anon_sym_SEMI_AMP;
	v->a[108361] = anon_sym_SEMI_SEMI_AMP;
	v->a[108362] = anon_sym_PIPE_AMP;
	v->a[108363] = anon_sym_AMP_AMP;
	v->a[108364] = anon_sym_PIPE_PIPE;
	v->a[108365] = anon_sym_LT;
	v->a[108366] = anon_sym_GT;
	v->a[108367] = anon_sym_GT_GT;
	v->a[108368] = anon_sym_AMP_GT;
	v->a[108369] = anon_sym_AMP_GT_GT;
	v->a[108370] = anon_sym_LT_AMP;
	v->a[108371] = anon_sym_GT_AMP;
	v->a[108372] = anon_sym_GT_PIPE;
	v->a[108373] = anon_sym_LT_AMP_DASH;
	v->a[108374] = anon_sym_GT_AMP_DASH;
	v->a[108375] = anon_sym_LT_LT;
	v->a[108376] = anon_sym_LT_LT_DASH;
	v->a[108377] = anon_sym_AMP;
	v->a[108378] = anon_sym_SEMI;
	v->a[108379] = 17;
	small_parse_table_5419(v);
}

void	small_parse_table_5419(t_small_parse_table_array *v)
{
	v->a[108380] = actions(57);
	v->a[108381] = 1;
	v->a[108382] = sym_comment;
	v->a[108383] = actions(1969);
	v->a[108384] = 1;
	v->a[108385] = sym_word;
	v->a[108386] = actions(1973);
	v->a[108387] = 1;
	v->a[108388] = anon_sym_DOLLAR;
	v->a[108389] = actions(1979);
	v->a[108390] = 1;
	v->a[108391] = aux_sym_number_token1;
	v->a[108392] = actions(1981);
	v->a[108393] = 1;
	v->a[108394] = aux_sym_number_token2;
	v->a[108395] = actions(1985);
	v->a[108396] = 1;
	v->a[108397] = anon_sym_DOLLAR_LPAREN;
	v->a[108398] = actions(1993);
	v->a[108399] = 1;
	small_parse_table_5420(v);
}

/* EOF small_parse_table_1083.c */
