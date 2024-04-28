/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2645.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13225(t_small_parse_table_array *v)
{
	v->a[264500] = 1;
	v->a[264501] = sym_variable_name;
	v->a[264502] = actions(12062);
	v->a[264503] = 1;
	v->a[264504] = anon_sym_RBRACE3;
	v->a[264505] = state(3532);
	v->a[264506] = 1;
	v->a[264507] = sym_subscript;
	v->a[264508] = state(6428);
	v->a[264509] = 1;
	v->a[264510] = aux_sym__expansion_body_repeat1;
	v->a[264511] = state(6472);
	v->a[264512] = 1;
	v->a[264513] = sym_command_substitution;
	v->a[264514] = state(7298);
	v->a[264515] = 1;
	v->a[264516] = sym__expansion_body;
	v->a[264517] = actions(11762);
	v->a[264518] = 2;
	v->a[264519] = anon_sym_POUND2;
	small_parse_table_13226(v);
}

void	small_parse_table_13226(t_small_parse_table_array *v)
{
	v->a[264520] = anon_sym_EQ2;
	v->a[264521] = actions(8050);
	v->a[264522] = 3;
	v->a[264523] = sym__external_expansion_sym_hash;
	v->a[264524] = sym__external_expansion_sym_bang;
	v->a[264525] = sym__external_expansion_sym_equal;
	v->a[264526] = actions(11754);
	v->a[264527] = 4;
	v->a[264528] = anon_sym_DASH;
	v->a[264529] = anon_sym_STAR;
	v->a[264530] = anon_sym_QMARK;
	v->a[264531] = anon_sym_AT2;
	v->a[264532] = actions(11756);
	v->a[264533] = 5;
	v->a[264534] = anon_sym_BANG;
	v->a[264535] = anon_sym_DOLLAR;
	v->a[264536] = anon_sym_POUND;
	v->a[264537] = anon_sym_0;
	v->a[264538] = anon_sym__;
	v->a[264539] = 5;
	small_parse_table_13227(v);
}

void	small_parse_table_13227(t_small_parse_table_array *v)
{
	v->a[264540] = actions(3);
	v->a[264541] = 1;
	v->a[264542] = sym_comment;
	v->a[264543] = state(4664);
	v->a[264544] = 1;
	v->a[264545] = aux_sym_pipeline_repeat1;
	v->a[264546] = actions(12066);
	v->a[264547] = 2;
	v->a[264548] = anon_sym_PIPE;
	v->a[264549] = anon_sym_PIPE_AMP;
	v->a[264550] = actions(12068);
	v->a[264551] = 2;
	v->a[264552] = sym_file_descriptor;
	v->a[264553] = aux_sym_heredoc_redirect_token1;
	v->a[264554] = actions(12064);
	v->a[264555] = 20;
	v->a[264556] = anon_sym_SEMI;
	v->a[264557] = anon_sym_PIPE_PIPE;
	v->a[264558] = anon_sym_AMP_AMP;
	v->a[264559] = anon_sym_AMP;
	small_parse_table_13228(v);
}

void	small_parse_table_13228(t_small_parse_table_array *v)
{
	v->a[264560] = anon_sym_LT;
	v->a[264561] = anon_sym_GT;
	v->a[264562] = anon_sym_LT_LT;
	v->a[264563] = anon_sym_GT_GT;
	v->a[264564] = anon_sym_esac;
	v->a[264565] = anon_sym_SEMI_SEMI;
	v->a[264566] = anon_sym_SEMI_AMP;
	v->a[264567] = anon_sym_SEMI_SEMI_AMP;
	v->a[264568] = anon_sym_AMP_GT;
	v->a[264569] = anon_sym_AMP_GT_GT;
	v->a[264570] = anon_sym_LT_AMP;
	v->a[264571] = anon_sym_GT_AMP;
	v->a[264572] = anon_sym_GT_PIPE;
	v->a[264573] = anon_sym_LT_AMP_DASH;
	v->a[264574] = anon_sym_GT_AMP_DASH;
	v->a[264575] = anon_sym_LT_LT_DASH;
	v->a[264576] = 3;
	v->a[264577] = actions(3);
	v->a[264578] = 1;
	v->a[264579] = sym_comment;
	small_parse_table_13229(v);
}

void	small_parse_table_13229(t_small_parse_table_array *v)
{
	v->a[264580] = actions(1354);
	v->a[264581] = 4;
	v->a[264582] = sym__concat;
	v->a[264583] = sym_test_operator;
	v->a[264584] = sym__brace_start;
	v->a[264585] = aux_sym_heredoc_redirect_token1;
	v->a[264586] = actions(1352);
	v->a[264587] = 21;
	v->a[264588] = anon_sym_LPAREN_LPAREN;
	v->a[264589] = anon_sym_SEMI;
	v->a[264590] = anon_sym_AMP;
	v->a[264591] = anon_sym_SEMI_SEMI;
	v->a[264592] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[264593] = anon_sym_DOLLAR_LBRACK;
	v->a[264594] = aux_sym_concatenation_token1;
	v->a[264595] = anon_sym_DOLLAR;
	v->a[264596] = sym__special_character;
	v->a[264597] = anon_sym_DQUOTE;
	v->a[264598] = sym_raw_string;
	v->a[264599] = sym_ansi_c_string;
	small_parse_table_13230(v);
}

/* EOF small_parse_table_2645.c */
