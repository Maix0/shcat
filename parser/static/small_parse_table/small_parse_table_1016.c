/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1016.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5080(t_small_parse_table_array *v)
{
	v->a[101600] = sym__special_character;
	v->a[101601] = actions(2464);
	v->a[101602] = 1;
	v->a[101603] = anon_sym_DQUOTE;
	v->a[101604] = actions(2466);
	v->a[101605] = 1;
	v->a[101606] = aux_sym_number_token1;
	v->a[101607] = actions(2468);
	v->a[101608] = 1;
	v->a[101609] = aux_sym_number_token2;
	v->a[101610] = actions(2470);
	v->a[101611] = 1;
	v->a[101612] = anon_sym_DOLLAR_LBRACE;
	v->a[101613] = actions(2472);
	v->a[101614] = 1;
	v->a[101615] = anon_sym_DOLLAR_LPAREN;
	v->a[101616] = actions(2474);
	v->a[101617] = 1;
	v->a[101618] = anon_sym_BQUOTE;
	v->a[101619] = actions(2476);
	small_parse_table_5081(v);
}

void	small_parse_table_5081(t_small_parse_table_array *v)
{
	v->a[101620] = 1;
	v->a[101621] = anon_sym_DOLLAR_BQUOTE;
	v->a[101622] = actions(2480);
	v->a[101623] = 1;
	v->a[101624] = sym_test_operator;
	v->a[101625] = actions(2482);
	v->a[101626] = 1;
	v->a[101627] = sym__brace_start;
	v->a[101628] = actions(5810);
	v->a[101629] = 1;
	v->a[101630] = aux_sym_heredoc_redirect_token1;
	v->a[101631] = state(2122);
	v->a[101632] = 1;
	v->a[101633] = aux_sym__heredoc_command;
	v->a[101634] = state(2852);
	v->a[101635] = 1;
	v->a[101636] = aux_sym__literal_repeat1;
	v->a[101637] = state(2882);
	v->a[101638] = 1;
	v->a[101639] = sym_concatenation;
	small_parse_table_5082(v);
}

void	small_parse_table_5082(t_small_parse_table_array *v)
{
	v->a[101640] = actions(2446);
	v->a[101641] = 2;
	v->a[101642] = sym_raw_string;
	v->a[101643] = sym_word;
	v->a[101644] = state(2716);
	v->a[101645] = 7;
	v->a[101646] = sym_arithmetic_expansion;
	v->a[101647] = sym_brace_expression;
	v->a[101648] = sym_string;
	v->a[101649] = sym_number;
	v->a[101650] = sym_simple_expansion;
	v->a[101651] = sym_expansion;
	v->a[101652] = sym_command_substitution;
	v->a[101653] = 4;
	v->a[101654] = actions(3);
	v->a[101655] = 1;
	v->a[101656] = sym_comment;
	v->a[101657] = actions(2632);
	v->a[101658] = 2;
	v->a[101659] = sym_file_descriptor;
	small_parse_table_5083(v);
}

void	small_parse_table_5083(t_small_parse_table_array *v)
{
	v->a[101660] = aux_sym_heredoc_redirect_token1;
	v->a[101661] = state(2109);
	v->a[101662] = 3;
	v->a[101663] = sym_file_redirect;
	v->a[101664] = sym_heredoc_redirect;
	v->a[101665] = aux_sym_redirected_statement_repeat1;
	v->a[101666] = actions(2630);
	v->a[101667] = 20;
	v->a[101668] = anon_sym_PIPE;
	v->a[101669] = anon_sym_RPAREN;
	v->a[101670] = anon_sym_SEMI_SEMI;
	v->a[101671] = anon_sym_PIPE_AMP;
	v->a[101672] = anon_sym_AMP_AMP;
	v->a[101673] = anon_sym_PIPE_PIPE;
	v->a[101674] = anon_sym_LT;
	v->a[101675] = anon_sym_GT;
	v->a[101676] = anon_sym_GT_GT;
	v->a[101677] = anon_sym_AMP_GT;
	v->a[101678] = anon_sym_AMP_GT_GT;
	v->a[101679] = anon_sym_LT_AMP;
	small_parse_table_5084(v);
}

void	small_parse_table_5084(t_small_parse_table_array *v)
{
	v->a[101680] = anon_sym_GT_AMP;
	v->a[101681] = anon_sym_GT_PIPE;
	v->a[101682] = anon_sym_LT_AMP_DASH;
	v->a[101683] = anon_sym_GT_AMP_DASH;
	v->a[101684] = anon_sym_LT_LT;
	v->a[101685] = anon_sym_LT_LT_DASH;
	v->a[101686] = anon_sym_AMP;
	v->a[101687] = anon_sym_SEMI;
	v->a[101688] = 3;
	v->a[101689] = actions(3);
	v->a[101690] = 1;
	v->a[101691] = sym_comment;
	v->a[101692] = actions(2719);
	v->a[101693] = 3;
	v->a[101694] = sym_file_descriptor;
	v->a[101695] = sym_variable_name;
	v->a[101696] = aux_sym_heredoc_redirect_token1;
	v->a[101697] = actions(2717);
	v->a[101698] = 22;
	v->a[101699] = anon_sym_esac;
	small_parse_table_5085(v);
}

/* EOF small_parse_table_1016.c */
