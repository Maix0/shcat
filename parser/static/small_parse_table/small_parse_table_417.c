/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_417.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2085(t_small_parse_table_array *v)
{
	v->a[41700] = sym_number;
	v->a[41701] = anon_sym_DOLLAR_LBRACE;
	v->a[41702] = anon_sym_DOLLAR_LPAREN;
	v->a[41703] = anon_sym_BQUOTE;
	v->a[41704] = sym_word;
	v->a[41705] = anon_sym_SEMI;
	v->a[41706] = 6;
	v->a[41707] = actions(3);
	v->a[41708] = 1;
	v->a[41709] = sym_comment;
	v->a[41710] = actions(1381);
	v->a[41711] = 1;
	v->a[41712] = sym_variable_name;
	v->a[41713] = actions(379);
	v->a[41714] = 2;
	v->a[41715] = sym_file_descriptor;
	v->a[41716] = ts_builtin_sym_end;
	v->a[41717] = actions(1379);
	v->a[41718] = 2;
	v->a[41719] = aux_sym__simple_variable_name_token1;
	small_parse_table_2086(v);
}

void	small_parse_table_2086(t_small_parse_table_array *v)
{
	v->a[41720] = aux_sym__multiline_variable_name_token1;
	v->a[41721] = actions(1377);
	v->a[41722] = 9;
	v->a[41723] = anon_sym_BANG;
	v->a[41724] = anon_sym_DASH;
	v->a[41725] = anon_sym_STAR;
	v->a[41726] = anon_sym_QMARK;
	v->a[41727] = anon_sym_DOLLAR;
	v->a[41728] = anon_sym_POUND;
	v->a[41729] = anon_sym_AT;
	v->a[41730] = anon_sym_0;
	v->a[41731] = anon_sym__;
	v->a[41732] = actions(381);
	v->a[41733] = 17;
	v->a[41734] = anon_sym_PIPE;
	v->a[41735] = anon_sym_SEMI_SEMI;
	v->a[41736] = anon_sym_AMP_AMP;
	v->a[41737] = anon_sym_PIPE_PIPE;
	v->a[41738] = anon_sym_LT;
	v->a[41739] = anon_sym_GT;
	small_parse_table_2087(v);
}

void	small_parse_table_2087(t_small_parse_table_array *v)
{
	v->a[41740] = anon_sym_GT_GT;
	v->a[41741] = anon_sym_LT_AMP;
	v->a[41742] = anon_sym_GT_AMP;
	v->a[41743] = anon_sym_GT_PIPE;
	v->a[41744] = anon_sym_LT_AMP_DASH;
	v->a[41745] = anon_sym_GT_AMP_DASH;
	v->a[41746] = anon_sym_LT_LT;
	v->a[41747] = anon_sym_LT_LT_DASH;
	v->a[41748] = aux_sym_heredoc_redirect_token1;
	v->a[41749] = anon_sym_AMP;
	v->a[41750] = anon_sym_SEMI;
	v->a[41751] = 12;
	v->a[41752] = actions(3);
	v->a[41753] = 1;
	v->a[41754] = sym_comment;
	v->a[41755] = actions(577);
	v->a[41756] = 1;
	v->a[41757] = sym_file_descriptor;
	v->a[41758] = actions(824);
	v->a[41759] = 1;
	small_parse_table_2088(v);
}

void	small_parse_table_2088(t_small_parse_table_array *v)
{
	v->a[41760] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41761] = actions(827);
	v->a[41762] = 1;
	v->a[41763] = anon_sym_DOLLAR;
	v->a[41764] = actions(830);
	v->a[41765] = 1;
	v->a[41766] = anon_sym_DQUOTE;
	v->a[41767] = actions(833);
	v->a[41768] = 1;
	v->a[41769] = anon_sym_DOLLAR_LBRACE;
	v->a[41770] = actions(836);
	v->a[41771] = 1;
	v->a[41772] = anon_sym_DOLLAR_LPAREN;
	v->a[41773] = actions(839);
	v->a[41774] = 1;
	v->a[41775] = anon_sym_BQUOTE;
	v->a[41776] = state(603);
	v->a[41777] = 2;
	v->a[41778] = sym_concatenation;
	v->a[41779] = aux_sym_for_statement_repeat1;
	small_parse_table_2089(v);
}

void	small_parse_table_2089(t_small_parse_table_array *v)
{
	v->a[41780] = actions(1463);
	v->a[41781] = 3;
	v->a[41782] = sym_raw_string;
	v->a[41783] = sym_number;
	v->a[41784] = sym_word;
	v->a[41785] = state(884);
	v->a[41786] = 5;
	v->a[41787] = sym_arithmetic_expansion;
	v->a[41788] = sym_string;
	v->a[41789] = sym_simple_expansion;
	v->a[41790] = sym_expansion;
	v->a[41791] = sym_command_substitution;
	v->a[41792] = actions(582);
	v->a[41793] = 14;
	v->a[41794] = anon_sym_PIPE;
	v->a[41795] = anon_sym_AMP_AMP;
	v->a[41796] = anon_sym_PIPE_PIPE;
	v->a[41797] = anon_sym_LT;
	v->a[41798] = anon_sym_GT;
	v->a[41799] = anon_sym_GT_GT;
	small_parse_table_2090(v);
}

/* EOF small_parse_table_417.c */
