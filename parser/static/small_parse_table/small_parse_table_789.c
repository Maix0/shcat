/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_789.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3945(t_small_parse_table_array *v)
{
	v->a[78900] = aux_sym_for_statement_repeat1;
	v->a[78901] = actions(3067);
	v->a[78902] = 3;
	v->a[78903] = sym_raw_string;
	v->a[78904] = sym_number;
	v->a[78905] = sym_word;
	v->a[78906] = state(462);
	v->a[78907] = 5;
	v->a[78908] = sym_arithmetic_expansion;
	v->a[78909] = sym_string;
	v->a[78910] = sym_simple_expansion;
	v->a[78911] = sym_expansion;
	v->a[78912] = sym_command_substitution;
	v->a[78913] = 9;
	v->a[78914] = actions(870);
	v->a[78915] = 1;
	v->a[78916] = sym_comment;
	v->a[78917] = actions(2990);
	v->a[78918] = 1;
	v->a[78919] = anon_sym_LT_LT;
	small_parse_table_3946(v);
}

void	small_parse_table_3946(t_small_parse_table_array *v)
{
	v->a[78920] = actions(2992);
	v->a[78921] = 1;
	v->a[78922] = anon_sym_LT_LT_DASH;
	v->a[78923] = actions(2994);
	v->a[78924] = 1;
	v->a[78925] = sym_file_descriptor;
	v->a[78926] = actions(2986);
	v->a[78927] = 2;
	v->a[78928] = anon_sym_GT_GT;
	v->a[78929] = anon_sym_GT_PIPE;
	v->a[78930] = actions(2988);
	v->a[78931] = 2;
	v->a[78932] = anon_sym_LT_AMP_DASH;
	v->a[78933] = anon_sym_GT_AMP_DASH;
	v->a[78934] = actions(3069);
	v->a[78935] = 2;
	v->a[78936] = anon_sym_AMP_AMP;
	v->a[78937] = anon_sym_PIPE_PIPE;
	v->a[78938] = state(1520);
	v->a[78939] = 3;
	small_parse_table_3947(v);
}

void	small_parse_table_3947(t_small_parse_table_array *v)
{
	v->a[78940] = sym_file_redirect;
	v->a[78941] = sym_heredoc_redirect;
	v->a[78942] = aux_sym_redirected_statement_repeat1;
	v->a[78943] = actions(2984);
	v->a[78944] = 4;
	v->a[78945] = anon_sym_LT;
	v->a[78946] = anon_sym_GT;
	v->a[78947] = anon_sym_LT_AMP;
	v->a[78948] = anon_sym_GT_AMP;
	v->a[78949] = 10;
	v->a[78950] = actions(3);
	v->a[78951] = 1;
	v->a[78952] = sym_comment;
	v->a[78953] = actions(2715);
	v->a[78954] = 1;
	v->a[78955] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78956] = actions(2717);
	v->a[78957] = 1;
	v->a[78958] = anon_sym_DOLLAR;
	v->a[78959] = actions(2719);
	small_parse_table_3948(v);
}

void	small_parse_table_3948(t_small_parse_table_array *v)
{
	v->a[78960] = 1;
	v->a[78961] = anon_sym_DQUOTE;
	v->a[78962] = actions(2721);
	v->a[78963] = 1;
	v->a[78964] = anon_sym_DOLLAR_LBRACE;
	v->a[78965] = actions(2723);
	v->a[78966] = 1;
	v->a[78967] = anon_sym_DOLLAR_LPAREN;
	v->a[78968] = actions(2725);
	v->a[78969] = 1;
	v->a[78970] = anon_sym_BQUOTE;
	v->a[78971] = state(490);
	v->a[78972] = 2;
	v->a[78973] = sym_concatenation;
	v->a[78974] = aux_sym_for_statement_repeat1;
	v->a[78975] = actions(3071);
	v->a[78976] = 3;
	v->a[78977] = sym_raw_string;
	v->a[78978] = sym_number;
	v->a[78979] = sym_word;
	small_parse_table_3949(v);
}

void	small_parse_table_3949(t_small_parse_table_array *v)
{
	v->a[78980] = state(828);
	v->a[78981] = 5;
	v->a[78982] = sym_arithmetic_expansion;
	v->a[78983] = sym_string;
	v->a[78984] = sym_simple_expansion;
	v->a[78985] = sym_expansion;
	v->a[78986] = sym_command_substitution;
	v->a[78987] = 10;
	v->a[78988] = actions(3);
	v->a[78989] = 1;
	v->a[78990] = sym_comment;
	v->a[78991] = actions(767);
	v->a[78992] = 1;
	v->a[78993] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78994] = actions(769);
	v->a[78995] = 1;
	v->a[78996] = anon_sym_DOLLAR;
	v->a[78997] = actions(771);
	v->a[78998] = 1;
	v->a[78999] = anon_sym_DQUOTE;
	small_parse_table_3950(v);
}

/* EOF small_parse_table_789.c */
