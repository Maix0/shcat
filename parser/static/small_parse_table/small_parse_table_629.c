/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_629.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3145(t_small_parse_table_array *v)
{
	v->a[62900] = sym__concat;
	v->a[62901] = actions(999);
	v->a[62902] = 25;
	v->a[62903] = anon_sym_PIPE;
	v->a[62904] = anon_sym_AMP_AMP;
	v->a[62905] = anon_sym_PIPE_PIPE;
	v->a[62906] = anon_sym_LT;
	v->a[62907] = anon_sym_GT;
	v->a[62908] = anon_sym_GT_GT;
	v->a[62909] = anon_sym_AMP_GT;
	v->a[62910] = anon_sym_AMP_GT_GT;
	v->a[62911] = anon_sym_LT_AMP;
	v->a[62912] = anon_sym_GT_AMP;
	v->a[62913] = anon_sym_GT_PIPE;
	v->a[62914] = anon_sym_LT_AMP_DASH;
	v->a[62915] = anon_sym_GT_AMP_DASH;
	v->a[62916] = anon_sym_LT_LT;
	v->a[62917] = anon_sym_LT_LT_DASH;
	v->a[62918] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[62919] = aux_sym_concatenation_token1;
	small_parse_table_3146(v);
}

void	small_parse_table_3146(t_small_parse_table_array *v)
{
	v->a[62920] = anon_sym_DOLLAR;
	v->a[62921] = anon_sym_DQUOTE;
	v->a[62922] = sym_raw_string;
	v->a[62923] = sym_number;
	v->a[62924] = anon_sym_DOLLAR_LBRACE;
	v->a[62925] = anon_sym_DOLLAR_LPAREN;
	v->a[62926] = anon_sym_BQUOTE;
	v->a[62927] = sym_word;
	v->a[62928] = 16;
	v->a[62929] = actions(1094);
	v->a[62930] = 1;
	v->a[62931] = sym_comment;
	v->a[62932] = actions(1869);
	v->a[62933] = 1;
	v->a[62934] = anon_sym_LPAREN;
	v->a[62935] = actions(1871);
	v->a[62936] = 1;
	v->a[62937] = anon_sym_BANG;
	v->a[62938] = actions(1879);
	v->a[62939] = 1;
	small_parse_table_3147(v);
}

void	small_parse_table_3147(t_small_parse_table_array *v)
{
	v->a[62940] = anon_sym_TILDE;
	v->a[62941] = actions(1881);
	v->a[62942] = 1;
	v->a[62943] = anon_sym_DOLLAR;
	v->a[62944] = actions(1883);
	v->a[62945] = 1;
	v->a[62946] = anon_sym_DQUOTE;
	v->a[62947] = actions(1887);
	v->a[62948] = 1;
	v->a[62949] = anon_sym_DOLLAR_LBRACE;
	v->a[62950] = actions(1889);
	v->a[62951] = 1;
	v->a[62952] = anon_sym_DOLLAR_LPAREN;
	v->a[62953] = actions(1891);
	v->a[62954] = 1;
	v->a[62955] = anon_sym_BQUOTE;
	v->a[62956] = actions(1893);
	v->a[62957] = 1;
	v->a[62958] = sym_variable_name;
	v->a[62959] = actions(1949);
	small_parse_table_3148(v);
}

void	small_parse_table_3148(t_small_parse_table_array *v)
{
	v->a[62960] = 1;
	v->a[62961] = anon_sym_RPAREN_RPAREN;
	v->a[62962] = actions(1875);
	v->a[62963] = 2;
	v->a[62964] = anon_sym_PLUS_PLUS;
	v->a[62965] = anon_sym_DASH_DASH;
	v->a[62966] = actions(1877);
	v->a[62967] = 2;
	v->a[62968] = anon_sym_DASH2;
	v->a[62969] = anon_sym_PLUS2;
	v->a[62970] = actions(1885);
	v->a[62971] = 2;
	v->a[62972] = sym_number;
	v->a[62973] = aux_sym__simple_variable_name_token1;
	v->a[62974] = state(365);
	v->a[62975] = 3;
	v->a[62976] = sym_string;
	v->a[62977] = sym_simple_expansion;
	v->a[62978] = sym_expansion;
	v->a[62979] = state(447);
	small_parse_table_3149(v);
}

void	small_parse_table_3149(t_small_parse_table_array *v)
{
	v->a[62980] = 8;
	v->a[62981] = sym__arithmetic_expression;
	v->a[62982] = sym_arithmetic_literal;
	v->a[62983] = sym_arithmetic_binary_expression;
	v->a[62984] = sym_arithmetic_ternary_expression;
	v->a[62985] = sym_arithmetic_unary_expression;
	v->a[62986] = sym_arithmetic_postfix_expression;
	v->a[62987] = sym_arithmetic_parenthesized_expression;
	v->a[62988] = sym_command_substitution;
	v->a[62989] = 3;
	v->a[62990] = actions(3);
	v->a[62991] = 1;
	v->a[62992] = sym_comment;
	v->a[62993] = actions(1076);
	v->a[62994] = 2;
	v->a[62995] = sym_file_descriptor;
	v->a[62996] = sym__concat;
	v->a[62997] = actions(1074);
	v->a[62998] = 25;
	v->a[62999] = anon_sym_PIPE;
	small_parse_table_3150(v);
}

/* EOF small_parse_table_629.c */
