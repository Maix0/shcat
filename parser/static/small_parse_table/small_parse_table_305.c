/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_305.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1525(t_small_parse_table_array *v)
{
	v->a[30500] = anon_sym_EQ;
	v->a[30501] = actions(1023);
	v->a[30502] = 1;
	v->a[30503] = anon_sym_QMARK;
	v->a[30504] = actions(1156);
	v->a[30505] = 1;
	v->a[30506] = anon_sym_RPAREN_RPAREN;
	v->a[30507] = actions(850);
	v->a[30508] = 2;
	v->a[30509] = anon_sym_LT;
	v->a[30510] = anon_sym_GT;
	v->a[30511] = actions(852);
	v->a[30512] = 2;
	v->a[30513] = anon_sym_GT_GT;
	v->a[30514] = anon_sym_LT_LT;
	v->a[30515] = actions(860);
	v->a[30516] = 2;
	v->a[30517] = anon_sym_EQ_EQ;
	v->a[30518] = anon_sym_BANG_EQ;
	v->a[30519] = actions(862);
	small_parse_table_1526(v);
}

void	small_parse_table_1526(t_small_parse_table_array *v)
{
	v->a[30520] = 2;
	v->a[30521] = anon_sym_LT_EQ;
	v->a[30522] = anon_sym_GT_EQ;
	v->a[30523] = actions(864);
	v->a[30524] = 2;
	v->a[30525] = anon_sym_PLUS;
	v->a[30526] = anon_sym_DASH;
	v->a[30527] = actions(868);
	v->a[30528] = 2;
	v->a[30529] = anon_sym_PLUS_PLUS2;
	v->a[30530] = anon_sym_DASH_DASH2;
	v->a[30531] = actions(866);
	v->a[30532] = 3;
	v->a[30533] = anon_sym_STAR;
	v->a[30534] = anon_sym_SLASH;
	v->a[30535] = anon_sym_PERCENT;
	v->a[30536] = actions(1079);
	v->a[30537] = 10;
	v->a[30538] = anon_sym_PLUS_EQ;
	v->a[30539] = anon_sym_DASH_EQ;
	small_parse_table_1527(v);
}

void	small_parse_table_1527(t_small_parse_table_array *v)
{
	v->a[30540] = anon_sym_STAR_EQ;
	v->a[30541] = anon_sym_SLASH_EQ;
	v->a[30542] = anon_sym_PERCENT_EQ;
	v->a[30543] = anon_sym_LT_LT_EQ;
	v->a[30544] = anon_sym_GT_GT_EQ;
	v->a[30545] = anon_sym_AMP_EQ;
	v->a[30546] = anon_sym_CARET_EQ;
	v->a[30547] = anon_sym_PIPE_EQ;
	v->a[30548] = 11;
	v->a[30549] = actions(3);
	v->a[30550] = 1;
	v->a[30551] = sym_comment;
	v->a[30552] = actions(790);
	v->a[30553] = 1;
	v->a[30554] = sym_file_descriptor;
	v->a[30555] = actions(910);
	v->a[30556] = 1;
	v->a[30557] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30558] = actions(912);
	v->a[30559] = 1;
	small_parse_table_1528(v);
}

void	small_parse_table_1528(t_small_parse_table_array *v)
{
	v->a[30560] = anon_sym_DOLLAR;
	v->a[30561] = actions(914);
	v->a[30562] = 1;
	v->a[30563] = anon_sym_DQUOTE;
	v->a[30564] = actions(916);
	v->a[30565] = 1;
	v->a[30566] = anon_sym_DOLLAR_LBRACE;
	v->a[30567] = actions(918);
	v->a[30568] = 1;
	v->a[30569] = anon_sym_DOLLAR_LPAREN;
	v->a[30570] = state(1276);
	v->a[30571] = 1;
	v->a[30572] = sym_concatenation;
	v->a[30573] = actions(1158);
	v->a[30574] = 3;
	v->a[30575] = sym_raw_string;
	v->a[30576] = sym_number;
	v->a[30577] = sym_word;
	v->a[30578] = state(1093);
	v->a[30579] = 5;
	small_parse_table_1529(v);
}

void	small_parse_table_1529(t_small_parse_table_array *v)
{
	v->a[30580] = sym_arithmetic_expansion;
	v->a[30581] = sym_string;
	v->a[30582] = sym_simple_expansion;
	v->a[30583] = sym_expansion;
	v->a[30584] = sym_command_substitution;
	v->a[30585] = actions(788);
	v->a[30586] = 18;
	v->a[30587] = anon_sym_PIPE;
	v->a[30588] = anon_sym_SEMI_SEMI;
	v->a[30589] = anon_sym_AMP_AMP;
	v->a[30590] = anon_sym_PIPE_PIPE;
	v->a[30591] = anon_sym_LT;
	v->a[30592] = anon_sym_GT;
	v->a[30593] = anon_sym_GT_GT;
	v->a[30594] = anon_sym_LT_AMP;
	v->a[30595] = anon_sym_GT_AMP;
	v->a[30596] = anon_sym_GT_PIPE;
	v->a[30597] = anon_sym_LT_AMP_DASH;
	v->a[30598] = anon_sym_GT_AMP_DASH;
	v->a[30599] = anon_sym_LT_LT;
	small_parse_table_1530(v);
}

/* EOF small_parse_table_305.c */
