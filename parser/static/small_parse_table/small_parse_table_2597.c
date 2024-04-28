/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2597.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12985(t_small_parse_table_array *v)
{
	v->a[259700] = sym_file_descriptor;
	v->a[259701] = aux_sym_heredoc_redirect_token1;
	v->a[259702] = state(4746);
	v->a[259703] = 3;
	v->a[259704] = sym_file_redirect;
	v->a[259705] = sym_heredoc_redirect;
	v->a[259706] = aux_sym_redirected_statement_repeat1;
	v->a[259707] = actions(4270);
	v->a[259708] = 18;
	v->a[259709] = anon_sym_SEMI;
	v->a[259710] = anon_sym_PIPE_PIPE;
	v->a[259711] = anon_sym_AMP_AMP;
	v->a[259712] = anon_sym_AMP;
	v->a[259713] = anon_sym_LT;
	v->a[259714] = anon_sym_GT;
	v->a[259715] = anon_sym_LT_LT;
	v->a[259716] = anon_sym_GT_GT;
	v->a[259717] = anon_sym_RPAREN;
	v->a[259718] = anon_sym_SEMI_SEMI;
	v->a[259719] = anon_sym_AMP_GT;
	small_parse_table_12986(v);
}

void	small_parse_table_12986(t_small_parse_table_array *v)
{
	v->a[259720] = anon_sym_AMP_GT_GT;
	v->a[259721] = anon_sym_LT_AMP;
	v->a[259722] = anon_sym_GT_AMP;
	v->a[259723] = anon_sym_GT_PIPE;
	v->a[259724] = anon_sym_LT_AMP_DASH;
	v->a[259725] = anon_sym_GT_AMP_DASH;
	v->a[259726] = anon_sym_LT_LT_DASH;
	v->a[259727] = 16;
	v->a[259728] = actions(3);
	v->a[259729] = 1;
	v->a[259730] = sym_comment;
	v->a[259731] = actions(11760);
	v->a[259732] = 1;
	v->a[259733] = anon_sym_BANG2;
	v->a[259734] = actions(11764);
	v->a[259735] = 1;
	v->a[259736] = anon_sym_DOLLAR_LPAREN;
	v->a[259737] = actions(11766);
	v->a[259738] = 1;
	v->a[259739] = anon_sym_BQUOTE;
	small_parse_table_12987(v);
}

void	small_parse_table_12987(t_small_parse_table_array *v)
{
	v->a[259740] = actions(11768);
	v->a[259741] = 1;
	v->a[259742] = anon_sym_DOLLAR_BQUOTE;
	v->a[259743] = actions(11770);
	v->a[259744] = 1;
	v->a[259745] = aux_sym__simple_variable_name_token1;
	v->a[259746] = actions(11772);
	v->a[259747] = 1;
	v->a[259748] = sym_variable_name;
	v->a[259749] = actions(11939);
	v->a[259750] = 1;
	v->a[259751] = anon_sym_RBRACE3;
	v->a[259752] = state(3532);
	v->a[259753] = 1;
	v->a[259754] = sym_subscript;
	v->a[259755] = state(6428);
	v->a[259756] = 1;
	v->a[259757] = aux_sym__expansion_body_repeat1;
	v->a[259758] = state(6472);
	v->a[259759] = 1;
	small_parse_table_12988(v);
}

void	small_parse_table_12988(t_small_parse_table_array *v)
{
	v->a[259760] = sym_command_substitution;
	v->a[259761] = state(7345);
	v->a[259762] = 1;
	v->a[259763] = sym__expansion_body;
	v->a[259764] = actions(11762);
	v->a[259765] = 2;
	v->a[259766] = anon_sym_POUND2;
	v->a[259767] = anon_sym_EQ2;
	v->a[259768] = actions(8050);
	v->a[259769] = 3;
	v->a[259770] = sym__external_expansion_sym_hash;
	v->a[259771] = sym__external_expansion_sym_bang;
	v->a[259772] = sym__external_expansion_sym_equal;
	v->a[259773] = actions(11754);
	v->a[259774] = 4;
	v->a[259775] = anon_sym_DASH;
	v->a[259776] = anon_sym_STAR;
	v->a[259777] = anon_sym_QMARK;
	v->a[259778] = anon_sym_AT2;
	v->a[259779] = actions(11756);
	small_parse_table_12989(v);
}

void	small_parse_table_12989(t_small_parse_table_array *v)
{
	v->a[259780] = 5;
	v->a[259781] = anon_sym_BANG;
	v->a[259782] = anon_sym_DOLLAR;
	v->a[259783] = anon_sym_POUND;
	v->a[259784] = anon_sym_0;
	v->a[259785] = anon_sym__;
	v->a[259786] = 8;
	v->a[259787] = actions(3);
	v->a[259788] = 1;
	v->a[259789] = sym_comment;
	v->a[259790] = actions(11410);
	v->a[259791] = 1;
	v->a[259792] = anon_sym_LT_LT_LT;
	v->a[259793] = actions(11535);
	v->a[259794] = 1;
	v->a[259795] = aux_sym_heredoc_redirect_token1;
	v->a[259796] = actions(11941);
	v->a[259797] = 1;
	v->a[259798] = sym_file_descriptor;
	v->a[259799] = actions(11487);
	small_parse_table_12990(v);
}

/* EOF small_parse_table_2597.c */
