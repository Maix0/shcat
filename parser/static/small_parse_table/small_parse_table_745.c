/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_745.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3725(t_small_parse_table_array *v)
{
	v->a[74500] = 1;
	v->a[74501] = anon_sym_DOLLAR_LPAREN;
	v->a[74502] = actions(4354);
	v->a[74503] = 1;
	v->a[74504] = anon_sym_BQUOTE;
	v->a[74505] = actions(4356);
	v->a[74506] = 1;
	v->a[74507] = anon_sym_DOLLAR_BQUOTE;
	v->a[74508] = actions(4358);
	v->a[74509] = 1;
	v->a[74510] = sym_test_operator;
	v->a[74511] = actions(4360);
	v->a[74512] = 1;
	v->a[74513] = sym_extglob_pattern;
	v->a[74514] = actions(4362);
	v->a[74515] = 1;
	v->a[74516] = sym__brace_start;
	v->a[74517] = actions(4435);
	v->a[74518] = 1;
	v->a[74519] = anon_sym_esac;
	small_parse_table_3726(v);
}

void	small_parse_table_3726(t_small_parse_table_array *v)
{
	v->a[74520] = actions(4439);
	v->a[74521] = 1;
	v->a[74522] = aux_sym_heredoc_redirect_token1;
	v->a[74523] = state(3393);
	v->a[74524] = 1;
	v->a[74525] = aux_sym__literal_repeat1;
	v->a[74526] = state(3811);
	v->a[74527] = 1;
	v->a[74528] = sym_last_case_item;
	v->a[74529] = actions(4328);
	v->a[74530] = 2;
	v->a[74531] = sym_raw_string;
	v->a[74532] = sym_word;
	v->a[74533] = state(1749);
	v->a[74534] = 2;
	v->a[74535] = sym_case_item;
	v->a[74536] = aux_sym_case_statement_repeat1;
	v->a[74537] = state(3472);
	v->a[74538] = 2;
	v->a[74539] = sym_concatenation;
	small_parse_table_3727(v);
}

void	small_parse_table_3727(t_small_parse_table_array *v)
{
	v->a[74540] = sym__extglob_blob;
	v->a[74541] = actions(4437);
	v->a[74542] = 3;
	v->a[74543] = anon_sym_SEMI_SEMI;
	v->a[74544] = anon_sym_AMP;
	v->a[74545] = anon_sym_SEMI;
	v->a[74546] = state(3295);
	v->a[74547] = 7;
	v->a[74548] = sym_arithmetic_expansion;
	v->a[74549] = sym_brace_expression;
	v->a[74550] = sym_string;
	v->a[74551] = sym_number;
	v->a[74552] = sym_simple_expansion;
	v->a[74553] = sym_expansion;
	v->a[74554] = sym_command_substitution;
	v->a[74555] = 5;
	v->a[74556] = actions(57);
	v->a[74557] = 1;
	v->a[74558] = sym_comment;
	v->a[74559] = state(1599);
	small_parse_table_3728(v);
}

void	small_parse_table_3728(t_small_parse_table_array *v)
{
	v->a[74560] = 1;
	v->a[74561] = aux_sym_concatenation_repeat1;
	v->a[74562] = actions(4441);
	v->a[74563] = 2;
	v->a[74564] = sym__concat;
	v->a[74565] = aux_sym_concatenation_token1;
	v->a[74566] = actions(3119);
	v->a[74567] = 13;
	v->a[74568] = anon_sym_PIPE;
	v->a[74569] = anon_sym_LT;
	v->a[74570] = anon_sym_GT;
	v->a[74571] = anon_sym_AMP_GT;
	v->a[74572] = anon_sym_LT_AMP;
	v->a[74573] = anon_sym_GT_AMP;
	v->a[74574] = anon_sym_LT_LT;
	v->a[74575] = anon_sym_DOLLAR;
	v->a[74576] = aux_sym_number_token1;
	v->a[74577] = aux_sym_number_token2;
	v->a[74578] = anon_sym_DOLLAR_LPAREN;
	v->a[74579] = anon_sym_BQUOTE;
	small_parse_table_3729(v);
}

void	small_parse_table_3729(t_small_parse_table_array *v)
{
	v->a[74580] = sym_word;
	v->a[74581] = actions(3121);
	v->a[74582] = 18;
	v->a[74583] = sym_file_descriptor;
	v->a[74584] = sym_test_operator;
	v->a[74585] = sym__brace_start;
	v->a[74586] = anon_sym_PIPE_AMP;
	v->a[74587] = anon_sym_AMP_AMP;
	v->a[74588] = anon_sym_PIPE_PIPE;
	v->a[74589] = anon_sym_GT_GT;
	v->a[74590] = anon_sym_AMP_GT_GT;
	v->a[74591] = anon_sym_GT_PIPE;
	v->a[74592] = anon_sym_LT_AMP_DASH;
	v->a[74593] = anon_sym_GT_AMP_DASH;
	v->a[74594] = anon_sym_LT_LT_DASH;
	v->a[74595] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74596] = sym__special_character;
	v->a[74597] = anon_sym_DQUOTE;
	v->a[74598] = sym_raw_string;
	v->a[74599] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3730(v);
}

/* EOF small_parse_table_745.c */
